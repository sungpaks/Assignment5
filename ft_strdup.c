/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:25:10 by sunghoch          #+#    #+#             */
/*   Updated: 2023/03/26 15:41:49 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcpy(char *result, char *src);

char	*ft_strdup(char *src)
{ //문자열을 새로 할당하고 복사하는 함수
	int		l;
	char	*result;

	l = ft_strlen(src);
	result = (char *) malloc (l + 1); //문자열의 길이 + 1만큼 메모리 할당
	if (result == 0)
		return (0);
	ft_strcpy(result, src); //문자열을 복사
	return (result);
}

static void	ft_strcpy(char *result, char *src)
{ //문자열을 복사하는 함수
	int	i;

	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = 0;
}
