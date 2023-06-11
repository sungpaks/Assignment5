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
{ //���ڿ��� ������ ��ȯ�ϴ� �Լ�
	int	cnt_minus;
	int	result;

	cnt_minus = 1;//������ ��� -1�� �ٲٱ� ���� ����
	str = remove_space(str);//������ �����Ѵ�.
	if (*str == '-' || *str == '+')
	{//�� �տ� +�� -�� ���� ���
		if (*str == '-') //������ ���
			cnt_minus *= -1; //cnt_minus�� -1�� �ٲ۴�.
		str++;//���� ���ڷ� �Ѿ��.
	}
	result = 0;
	while ('0' <= *str && *str <= '9')
	{ //���ڿ��� ������ �ٲٴ� ����
		result *= 10;
		result += *str - 48;
		str++;
	}
	return (cnt_minus * result);//������ ��� -1�� �����ش�.
}

static const char	*remove_space(const char *str)
{
	while (*str)
	{//���ڿ��� �� �պ��� ������ �����Ѵ�.
		if (*str == '\t' || *str == '\n' || *str == '\v' \
				|| *str == '\f' || *str == '\r' || *str == ' ')
			str++;
		else
			break ;
	}
	return (str);
}
