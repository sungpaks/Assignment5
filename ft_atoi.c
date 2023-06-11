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
{
	int	cnt_minus;
	int	result;

	cnt_minus = 1;
	str = remove_space(str);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			cnt_minus *= -1;
		str++;
	}
	result = 0;
	while ('0' <= *str && *str <= '9')
	{
		result *= 10;
		result += *str - 48;
		str++;
	}
	return (cnt_minus * result);
}

static const char	*remove_space(const char *str)
{
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
