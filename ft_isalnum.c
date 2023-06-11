/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:20:23 by sunghoch          #+#    #+#             */
/*   Updated: 2023/03/28 18:10:50 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (48 <= c && c <= 57)
		return (4);
	else if (65 <= c && c <= 90)
		return (1);
	else if (97 <= c && c <= 122)
		return (2);
	else
		return (0);
}
/*
������ �ƽ�Ű�ڵ尡 ������ ���, 4�� ��ȯ
������ �ƽ�Ű�ڵ尡 �빮���� ���, 1�� ��ȯ
������ �ƽ�Ű�ڵ尡 �ҹ����� ���, 2�� ��ȯ
�� ���� ���, 0�� ��ȯ
*/