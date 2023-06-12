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
{//연결리스트의 노드 개수를 반환하는 함수
	int	i;

	if (!lst)//연결리스트가 비어있을 경우 0 반환
		return (0);
	i = 1;
	while (lst->next)//연결리스트의 맨 뒤로 이동 후 노드 개수 반환
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
