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
{//연결리스트의 모든 노드를 삭제하는 함수
	t_list	*current;
	t_list	*tmp;

	if (!lst) //연결리스트가 비어있을 경우
		return ;
	current = *lst; //연결리스트의 맨 앞부터
	while (current)//맨 뒤까지 이동하면서
	{//노드들을 삭제하고 메모리를 해제한다.
		del(current->content);
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*lst = NULL;//해제한 노드는 NULL로 초기화한다.
}
