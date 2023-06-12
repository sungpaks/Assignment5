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
{ //���ڿ��� ������ �ٲٴ� �Լ�
	long long	cnt_minus;
	long long	result;

	cnt_minus = 1;//�������� ������� �Ǻ��ϴ� ����
	str = remove_space(str);//������ �����ϴ� �Լ�
	if (*str == '-' || *str == '+')
	{//�������� ������� �Ǻ��ϴ� ������ ���� �־���
		if (*str == '-')//������ ���
			cnt_minus *= -1;
		str++;
	}
	result = 0;
	while ('0' <= *str && *str <= '9')//���ڿ��� ������ �ٲ��ִ� ����
	{
		result *= 10;
		result += (long long)(*str - 48); 
		str++;
	}
	result *= cnt_minus; //�������� ������� �Ǻ��ϴ� ������ ���� ������� �ٲ���
	if (result < -2147483648 || result > 2147483647)
		return (0); //int�� ������ �Ѿ�� 0�� ����
	return ((int)result); //int�� ������ �Ѿ�� ������ result�� ����
}

static const char	*remove_space(const char *str)
{ //������ �����ϴ� �Լ�
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