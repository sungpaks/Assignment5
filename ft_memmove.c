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
{//n ����Ʈ�� �����ϴ� �Լ�, src�� dest�� ��ġ���� ����� ���簡 �ȴ�.
	size_t	i;

	if (!dest && !src)
		return (0);
	if (dest > src) //dest�� src���� ũ��(�ڿ� ������) �ڿ������� �����Ѵ�.
	{
		i = n;
		while (i > 0)
		{
			i--;
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		}
	}
	else //dest�� src���� ������(�տ� ������) �տ������� �����Ѵ�.
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
