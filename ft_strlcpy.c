/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:12:21 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 19:52:36 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{ //src를 dest에 복사하는 함수 : size만큼
	size_t	i;
	int		l;

	l = ft_strlen(src);
	i = 0;
	if (!size) //size가 0인 경우, src의 길이를 반환
		return (l);
	while (src[i] && i < size - 1) //src의 문자열을 dest에 복사
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (l);
}
