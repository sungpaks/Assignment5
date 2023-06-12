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
{//연결리스트의 노드를 생성하는 함수
	t_list	*result;

	result = (t_list *)malloc(sizeof(t_list));//노드를 동적할당
	if (!result)//동적할당에 실패했을 경우 NULL을 반환
		return (0);
	result->content = content;//노드의 content에 인자로 받은 content를 저장
	result->next = NULL;//노드의 next에 NULL을 저장
	return (result);
}
