/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:48:29 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 17:25:25 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{ //문자열 s1과 s2를 합쳐서 새로운 문자열을 만드는 함수
	char	*result;
	int		l1;
	int		l2;
	int		i;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	result = (char *)malloc(l1 + l2 + 1); //s1과 s2의 길이의 합 + 1만큼 메모리 할당
	if (!result)
		return (0);
	i = 0;
	while (i < l1 + l2) //s1과 s2를 차례대로 result에 복사
	{
		if (i < l1)
			*(result + i) = *(s1++);
		else
			*(result + i) = *(s2++);
		i++;
	}
	*(result + i) = 0;
	return (result);
}
