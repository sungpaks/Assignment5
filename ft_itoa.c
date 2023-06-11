/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 20:58:37 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/01 21:28:00 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	set_itoa(char *result, long long lln, int n, long long scale);

char	*ft_itoa(int n) //int�� ������ ���ڿ��� �ٲٴ� �Լ�
{
	long long	scale;
	long long	lln;
	int			size;
	char		*result;

	scale = 1;
	size = 0;
	lln = n;
	if (lln <= 0) //������ ���
	{
		size++; //���̳ʽ� ��ȣ�� ���� ������ �����.
		lln = (long long)n * -1; //����� �ٲ۴�.
	}
	while (lln / scale > 0) //�ڸ����� ���Ѵ�. 
	{
		scale *= 10;
		size++;
	}
	scale /= 10; //while���� ������ ���� scale�� �ѹ� �� Ŀ�������Ƿ� �ٽ� 10���� ������.
	result = (char *)malloc(size + 1); //���ڿ��� ������ ������ �Ҵ��Ѵ�.
	if (!result) //�Ҵ翡 �����ϸ� NULL�� ��ȯ�Ѵ�.
		return (0);
	set_itoa(result, lln, n, scale); //set_itoa�Լ����� ���ڿ��� �����, ��ȯ
	return (result);
}

static void	set_itoa(char *result, long long lln, int n, long long scale)
{
	int	i;

	i = 0;
	if (n == 0) //0�� ���
		result[i++] = '0';
	if (n < 0) //������ ���
		result[i++] = '-';
	while (scale > 0) //���ڿ� ����� ����
	{
		result[i++] = (lln / scale) + 48; //������ scale�� ������ (scale�� ������ �׻� ���� 0~9) ���ڷ� �ٲپ� ����
		lln = lln % scale; //lln�� scale�� ���� �������� lln�� ����
		scale /= 10; //scale�� 10���� ������.
	} //ex : 1234 -> 1, 234 -> 2, 34 -> 3, 4 -> 4
	result[i] = 0;
}
