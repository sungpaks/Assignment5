/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:58:14 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 17:23:05 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{//문자열 s1과 s2를 n만큼 비교하는 함수
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0); //n이 0인 경우, 0을 반환
	while (*s1 && *s2 && i < n)
	{ //s1과 s2가 같은 동안, s1과 s2의 문자를 비교
		if (*s1 != *s2 || i + 1 == n)
			break ;
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
} //s1이 s2보다 큰 경우, 양수를 반환, s1이 s2보다 작은 경우, 음수를 반환, 같은 경우, 0을 반환
