/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:02:09 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/05 19:15:16 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	l_n;
	long long	divider;
	char		c;

	if (n == 0)
		write(fd, "0", 1);
	l_n = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		l_n *= -1;
	}
	divider = 1;
	while (l_n / divider > 0)
		divider *= 10;
	divider /= 10;
	while (divider > 0)
	{
		c = l_n / divider + 48;
		write(fd, &c, 1);
		l_n = l_n % divider;
		divider /= 10;
	}
}
