/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:29:51 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 19:56:41 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{//문자열 s에서 문자 c가 마지막으로 나타나는 위치를 반환하는 함수
	char	*result;
	int		i;

	result = 0;
	i = 0;
	while (s[i]) //문자열 s를 끝까지 탐색
	{
		if (s[i] == (char)c) //문자 c가 나타나면 해당 위치를 result에 저장
			result = (char *)s + i;
		i++;
	}
	if (s[i] == (char)c) //문자열이 끝났어도, c가 혹여 NULL문자인 경우을 위해 한번 더 검사
		result = (char *)s + i;
	return (result);
}
