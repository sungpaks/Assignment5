/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:11:16 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/06 17:59:05 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//문자열을 구분자로 나누어 문자열 배열로 반환하는 함수
static char	*ft_strndup(char const *s, int size);
static int	ft_cnt_split(char const *s, char c);
static int	get_size(char const *s, char c);
static int	failed_to_alloc(char **result, int index);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		size;
	int		cnt;

	cnt = ft_cnt_split(s, c); //만들어야하는 문자열의 개수를 구함
	result = (char **) malloc ((cnt + 1) * sizeof(char *)); //문자열 개수만큼 메모리 할당
	if (result == 0) //메모리 할당에 실패한 경우
		return (NULL);
	i = 0;
	while (i < cnt) //문자열 개수만큼 반복하며 문자열을 구분자로 나누어 result에 차곡차곡 저장
	{
		while (*s == c) //구분자를 만나면 다음 문자로 이동
			++s;
		size = get_size(s, c); //문자열의 크기를 구하고,
		result[i] = ft_strndup((char *)s, size); //size만큼을 새로 할당하고 복사
		if (!result[i])
			cnt = failed_to_alloc(result, i); //메모리 할당에 실패한 경우, 지금까지 할당한 메모리를 해제함 : cnt가 -1이니 반복문을 빠져나가게 됨
		i++; //result의 인덱스를 증가시키고
		s += size; //문자열의 주소를 size만큼 증가시킴
	}
	if (cnt == -1) //중간에 메모리할당에 실패했던 경우, NULL을 반환
		return (0);
	result[i] = 0; //문자열을 NULL로 닫고,
	return (result); //result를 반환
}

static int	get_size(char const *s, char c)
{ //문자열의 크기를 구하는 함수
	int	size;

	size = 0;
	while (s[size] && s[size] != c)
		size++;
	return (size);
}

static char	*ft_strndup(char const *s, int size)
{ //문자열을 size만큼 새로 크기를 할당하고 복사하는 함수
	int		i;
	char	*result;

	result = (char *) malloc (size + 1);
	if (!result)
		return (0);
	i = 0;
	while (s[i] && i < size)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = 0;
	return (result);
}

static int	ft_cnt_split(char const *s, char c)
{ //문자열이 몇 개로 쪼개져야 할지 구하는 함수
	int	cnt;
	int	flag;

	cnt = 0;
	flag = 0; //이전 문자열이 구분자인지 아닌지를 확인하는 flag
	while (*s) //문자열의 끝까지 반복
	{
		if (*s != c) //문자열의 현재 문자가 구분자가 아니고
		{
			if (!flag) // 이전 문자열이 구분자였다면
				cnt++; //문자열의 개수를 증가
			flag = 1;
		}
		else
			flag = 0; //현재 문자가 구분자라면 flag를 0으로 설정
		s++;
	}
	return (cnt);
}

static int	failed_to_alloc(char **result, int index)
{ //메모리 할당에 실패했을 때, 지금까지 할당한 메모리를 해제하고 -1을 반환하는 함수
	int	i;

	i = 0;
	while (i <= index)
		free(result[i++]);
	free(result);
	return (-1);
}
