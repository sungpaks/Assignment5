/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:20:11 by sunghoch          #+#    #+#             */
/*   Updated: 2023/03/26 19:46:00 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (65 <= c && c <= 90)
		return (1);
	else if (97 <= c && c <= 122)
		return (2);
	else
		return (0);
}

/*
알파벳 대문자인 경우, 1을 반환
알파벳 소문자인 경우, 2를 반환
*/