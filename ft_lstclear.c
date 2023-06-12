/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:59:18 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 22:17:31 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{//���Ḯ��Ʈ�� ��� ��带 �����ϴ� �Լ�
	t_list	*current;
	t_list	*tmp;

	if (!lst) //���Ḯ��Ʈ�� ������� ���
		return ;
	current = *lst; //���Ḯ��Ʈ�� �� �պ���
	while (current)//�� �ڱ��� �̵��ϸ鼭
	{//������ �����ϰ� �޸𸮸� �����Ѵ�.
		del(current->content);
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*lst = NULL;//������ ���� NULL�� �ʱ�ȭ�Ѵ�.
}
