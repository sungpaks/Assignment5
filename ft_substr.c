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
{//���ڿ� s���� start���� len��ŭ�� ���ڿ��� ��ȯ�ϴ� �Լ�
	char			*result;
	unsigned int	i;
	unsigned int	l;

	if (ft_strlen(s) <= start)
		l = 0;//start�� ���ڿ��� ���̺��� ū ���, �� ���ڿ��� ��ȯ�Ұ���
	else if (ft_strlen(s + start) > len)
		l = len;//len�� ���ڿ��� ���̺��� ū ���, ���ڿ��� ���̸�ŭ
	else //�� ���� ����, ���ڿ��� ������������
		l = ft_strlen(s + start);
	result = (char *)malloc(sizeof(char) * (l + 1));//���ڿ��� ���� + 1��ŭ �޸� �Ҵ�
	if (!result)//�޸� �Ҵ� ���� �� NULL ��ȯ
		return (0);
	i = 0;
	while (i < l)//���ڿ� ����
	{
		*(result + i) = *(s + start + i);
		i++;
	}
	*(result + i) = 0;
	return (result);
}
