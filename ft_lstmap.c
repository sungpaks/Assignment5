/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 22:24:28 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/06 17:52:08 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{//연결리스트의 모든 노드에 함수를 적용한 결과를 새로운 연결리스트로 반환하는 함수
	t_list	*copy;
	t_list	*copy_head;
	char	*tmp;

	copy_head = 0;
	while (lst)
	{//연결리스트의 모든 노드에 함수를 적용한 결과를 새로운 연결리스트로 만든다
		tmp = (char *)f(lst->content);//f함수의 반환값을 tmp에 저장
		copy = ft_lstnew(tmp);//tmp를 content로 하는 노드를 생성
		if (!(copy))//노드 생성에 실패한 경우
		{
			ft_lstclear(&copy_head, del);
			del(tmp);
			break ;
		}
		ft_lstadd_back(&copy_head, copy);//새로운 노드를 연결리스트에 추가
		lst = lst->next;//다음 노드로 이동
	}
	return (copy_head);
}
