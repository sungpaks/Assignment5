/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:39:03 by sunghoch          #+#    #+#             */
/*   Updated: 2023/05/12 17:53:51 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static const char	*remove_space(const char *str);

int	ft_atoi(const char *str)
{ //문자열을 정수로 바꾸는 함수
	long long	cnt_minus;
	long long	result;

	cnt_minus = 1;//음수인지 양수인지 판별하는 변수
	str = remove_space(str);//공백을 제거하는 함수
	if (*str == '-' || *str == '+')
	{//음수인지 양수인지 판별하는 변수에 값을 넣어줌
		if (*str == '-')//음수일 경우
			cnt_minus *= -1;
		str++;
	}
	result = 0;
	while ('0' <= *str && *str <= '9')//문자열을 정수로 바꿔주는 과정
	{
		result *= 10;
		result += (long long)(*str - 48); 
		str++;
	}
	result *= cnt_minus; //음수인지 양수인지 판별하는 변수에 따라서 결과값을 바꿔줌
	if (result < -2147483648 || result > 2147483647)
		return (0); //int의 범위를 넘어가면 0을 리턴
	return ((int)result); //int의 범위를 넘어가지 않으면 result를 리턴
}

static const char	*remove_space(const char *str)
{ //공백을 제거하는 함수
	while (*str)
	{
		if (*str == '\t' || *str == '\n' || *str == '\v' \
				|| *str == '\f' || *str == '\r' || *str == ' ')
			str++;
		else
			break ;
	}
	return (str);
}