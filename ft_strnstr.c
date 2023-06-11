/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:19:01 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 20:34:27 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{//문자열 haystack에서 문자열 needle이 처음으로 나타나는 위치를 반환하는 함수
	size_t	i;
	size_t	needle_len;
	size_t	hay_len;

	if (!*needle)
		return ((char *)haystack);//needle이 비어있는 경우, haystack을 반환
	i = 0;
	needle_len = ft_strlen(needle);
	hay_len = ft_strlen(haystack);
	while (i + needle_len <= len && *(haystack + i) && i < hay_len)
	{//haystack의 문자열을 needle의 길이만큼 비교
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			return ((char *)haystack + i);//needle이 haystack에 있는 경우, haystack의 주소를 반환
		i++;
	}
	return (0);//needle이 haystack에 없는 경우, NULL을 반환
}
