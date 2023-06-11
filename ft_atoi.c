/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:39:03 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 20:02:58 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static const char	*remove_space(const char *str);

int	ft_atoi(const char *str)
{ //문자열을 정수로 변환하는 함수
	int	cnt_minus;
	int	result;

	cnt_minus = 1;//음수일 경우 -1로 바꾸기 위한 변수
	str = remove_space(str);//공백을 제거한다.
	if (*str == '-' || *str == '+')
	{//맨 앞에 +나 -가 있을 경우
		if (*str == '-') //음수일 경우
			cnt_minus *= -1; //cnt_minus를 -1로 바꾼다.
		str++;//다음 문자로 넘어간다.
	}
	result = 0;
	while ('0' <= *str && *str <= '9')
	{ //문자열을 정수로 바꾸는 과정
		result *= 10;
		result += *str - 48;
		str++;
	}
	return (cnt_minus * result);//음수일 경우 -1을 곱해준다.
}

static const char	*remove_space(const char *str)
{
	while (*str)
	{//문자열의 맨 앞부터 공백을 제거한다.
		if (*str == '\t' || *str == '\n' || *str == '\v' \
				|| *str == '\f' || *str == '\r' || *str == ' ')
			str++;
		else
			break ;
	}
	return (str);
}
