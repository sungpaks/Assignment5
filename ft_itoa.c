/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 20:58:37 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/01 21:28:00 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	set_itoa(char *result, long long lln, int n, long long scale);

char	*ft_itoa(int n) //int형 정수를 문자열로 바꾸는 함수
{
	long long	scale;
	long long	lln;
	int			size;
	char		*result;

	scale = 1;
	size = 0;
	lln = n;
	if (lln <= 0) //음수일 경우
	{
		size++; //마이너스 기호를 넣을 공간을 만든다.
		lln = (long long)n * -1; //양수로 바꾼다.
	}
	while (lln / scale > 0) //자릿수를 구한다. 
	{
		scale *= 10;
		size++;
	}
	scale /= 10; //while문이 끝나고 나면 scale이 한번 더 커져있으므로 다시 10으로 나눈다.
	result = (char *)malloc(size + 1); //문자열을 저장할 공간을 할당한다.
	if (!result) //할당에 실패하면 NULL을 반환한다.
		return (0);
	set_itoa(result, lln, n, scale); //set_itoa함수에서 문자열을 만들고, 반환
	return (result);
}

static void	set_itoa(char *result, long long lln, int n, long long scale)
{
	int	i;

	i = 0;
	if (n == 0) //0일 경우
		result[i++] = '0';
	if (n < 0) //음수일 경우
		result[i++] = '-';
	while (scale > 0) //문자열 만들기 시작
	{
		result[i++] = (lln / scale) + 48; //정수를 scale로 나누어 (scale로 나누면 항상 몫이 0~9) 문자로 바꾸어 저장
		lln = lln % scale; //lln을 scale로 나눈 나머지를 lln에 저장
		scale /= 10; //scale을 10으로 나눈다.
	} //ex : 1234 -> 1, 234 -> 2, 34 -> 3, 4 -> 4
	result[i] = 0;
}
