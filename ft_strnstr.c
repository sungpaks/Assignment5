/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:01 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 20:34:27 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{//���ڿ� haystack���� ���ڿ� needle�� ó������ ��Ÿ���� ��ġ�� ��ȯ�ϴ� �Լ�
	size_t	i;
	size_t	needle_len;
	size_t	hay_len;

	if (!*needle)
		return ((char *)haystack);//needle�� ����ִ� ���, haystack�� ��ȯ
	i = 0;
	needle_len = ft_strlen(needle);
	hay_len = ft_strlen(haystack);
	while (i + needle_len <= len && *(haystack + i) && i < hay_len)
	{//haystack�� ���ڿ��� needle�� ���̸�ŭ ��
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			return ((char *)haystack + i);//needle�� haystack�� �ִ� ���, haystack�� �ּҸ� ��ȯ
		i++;
	}
	return (0);//needle�� haystack�� ���� ���, NULL�� ��ȯ
}
