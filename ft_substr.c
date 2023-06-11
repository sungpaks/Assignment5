/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:10:26 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 17:24:57 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{//문자열 s에서 start부터 len만큼의 문자열을 반환하는 함수
	char			*result;
	unsigned int	i;
	unsigned int	l;

	if (ft_strlen(s) <= start)
		l = 0;//start가 문자열의 길이보다 큰 경우, 빈 문자열을 반환할것임
	else if (ft_strlen(s + start) > len)
		l = len;//len이 문자열의 길이보다 큰 경우, 문자열의 길이만큼
	else //그 외의 경우는, 문자열이 끝날때까지만
		l = ft_strlen(s + start);
	result = (char *)malloc(sizeof(char) * (l + 1));//문자열의 길이 + 1만큼 메모리 할당
	if (!result)//메모리 할당 실패 시 NULL 반환
		return (0);
	i = 0;
	while (i < l)//문자열 복사
	{
		*(result + i) = *(s + start + i);
		i++;
	}
	*(result + i) = 0;
	return (result);
}
