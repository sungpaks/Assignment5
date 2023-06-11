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
{ //dest �ڿ� src�� �̾���̴� �Լ� : size��ŭ
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (!dest && !size)
		return (src_len); //dest�� NULL�̰� size�� 0�� ���, src�� ���̸� ��ȯ
	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] && dest_len + i + 1 < size)
	{ //src�� ���ڿ��� dest �ڿ� �̾����
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	if (size > dest_len) //size�� dest�� ���̺��� ū ���, dest�� ���� + src�� ���̸� ��ȯ
		return (src_len + dest_len);
	else //size�� dest�� ���̺��� ���� ���, size + src�� ���̸� ��ȯ
		return (src_len + size);
}
