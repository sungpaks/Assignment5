/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:07:53 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 21:42:17 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{//���Ḯ��Ʈ�� ��� ������ ��ȯ�ϴ� �Լ�
	int	i;

	if (!lst)//���Ḯ��Ʈ�� ������� ��� 0 ��ȯ
		return (0);
	i = 1;
	while (lst->next)//���Ḯ��Ʈ�� �� �ڷ� �̵� �� ��� ���� ��ȯ
	{
		lst = lst->next;
		i++;
	}
	return (i);
}