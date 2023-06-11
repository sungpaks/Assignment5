/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:38:23 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/01 17:36:54 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{//n 바이트를 복사하는 함수, src와 dest가 겹치더라도 제대로 복사가 된다.
	size_t	i;

	if (!dest && !src)
		return (0);
	if (dest > src) //dest가 src보다 크면(뒤에 있으면) 뒤에서부터 복사한다.
	{
		i = n;
		while (i > 0)
		{
			i--;
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		}
	}
	else //dest가 src보다 작으면(앞에 있으면) 앞에서부터 복사한다.
	{
		i = 0;
		while (i < n)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	return (dest);
}
