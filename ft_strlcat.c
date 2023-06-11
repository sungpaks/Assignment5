/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:24:17 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 17:24:37 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{ //dest 뒤에 src를 이어붙이는 함수 : size만큼
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (!dest && !size)
		return (src_len); //dest가 NULL이고 size가 0인 경우, src의 길이를 반환
	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] && dest_len + i + 1 < size)
	{ //src의 문자열을 dest 뒤에 이어붙임
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	if (size > dest_len) //size가 dest의 길이보다 큰 경우, dest의 길이 + src의 길이를 반환
		return (src_len + dest_len);
	else //size가 dest의 길이보다 작은 경우, size + src의 길이를 반환
		return (src_len + size);
}
