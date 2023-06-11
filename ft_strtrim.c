/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:48:31 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 17:25:02 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{//문자열 앞뒤에 set에 있는 문자들을 제거하는 함수
	char	*result;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;//문자열 앞에 set에 있는 문자들을 제거
	end = ft_strlen(s1);
	while (end > 0 && ft_strchr(set, s1[end]))
		end--;//문자열 뒤에 set에 있는 문자들을 제거
	if (end == 0)
		result = (char *)malloc(1);//문자열이 set에 있는 문자들로만 이루어져 있는 경우
	else
		result = (char *)malloc(end - start + 2);//문자열이 set에 있는 문자들로만 이루어져 있지 않은 경우
	if (!result)
		return (0);//메모리 할당 실패 시 NULL 반환
	i = 0;
	s1 += start; //문자열 앞에 set에 있는 문자들을 제거한 문자열의 시작 주소
	while (end > 0 && i < end - start + 1) 
		result[i++] = *(s1++); //문자열 뒤에 set에 있는 문자들을 제거한 문자열을 result에 복사
	result[i] = 0;
	return (result);
}
