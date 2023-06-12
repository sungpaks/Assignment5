/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:13:54 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 22:22:36 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{//���Ḯ��Ʈ�� �� �ڿ� ��带 �߰��ϴ� �Լ�
	t_list	*current;

	if (!*lst) //���Ḯ��Ʈ�� ������� ���
	{
		*lst = new;
		return ;
	}
	current = *lst; 
	while (current->next) //���Ḯ��Ʈ�� �� �ڷ� �̵�
		current = current->next;
	current->next = new; //�� �ڿ� ��带 �߰�
}
