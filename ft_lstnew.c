/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:55:51 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 21:43:04 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{//���Ḯ��Ʈ�� ��带 �����ϴ� �Լ�
	t_list	*result;

	result = (t_list *)malloc(sizeof(t_list));//��带 �����Ҵ�
	if (!result)//�����Ҵ翡 �������� ��� NULL�� ��ȯ
		return (0);
	result->content = content;//����� content�� ���ڷ� ���� content�� ����
	result->next = NULL;//����� next�� NULL�� ����
	return (result);
}
