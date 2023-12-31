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
{//연결리스트의 맨 뒤에 노드를 추가하는 함수
	t_list	*current;

	if (!*lst) //연결리스트가 비어있을 경우
	{
		*lst = new;
		return ;
	}
	current = *lst; 
	while (current->next) //연결리스트의 맨 뒤로 이동
		current = current->next;
	current->next = new; //맨 뒤에 노드를 추가
}
