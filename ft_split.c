/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghoch <sunghoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:11:16 by sunghoch          #+#    #+#             */
/*   Updated: 2023/04/06 17:59:05 by sunghoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//���ڿ��� �����ڷ� ������ ���ڿ� �迭�� ��ȯ�ϴ� �Լ�
static char	*ft_strndup(char const *s, int size);
static int	ft_cnt_split(char const *s, char c);
static int	get_size(char const *s, char c);
static int	failed_to_alloc(char **result, int index);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		size;
	int		cnt;

	cnt = ft_cnt_split(s, c); //�������ϴ� ���ڿ��� ������ ����
	result = (char **) malloc ((cnt + 1) * sizeof(char *)); //���ڿ� ������ŭ �޸� �Ҵ�
	if (result == 0) //�޸� �Ҵ翡 ������ ���
		return (NULL);
	i = 0;
	while (i < cnt) //���ڿ� ������ŭ �ݺ��ϸ� ���ڿ��� �����ڷ� ������ result�� �������� ����
	{
		while (*s == c) //�����ڸ� ������ ���� ���ڷ� �̵�
			++s;
		size = get_size(s, c); //���ڿ��� ũ�⸦ ���ϰ�,
		result[i] = ft_strndup((char *)s, size); //size��ŭ�� ���� �Ҵ��ϰ� ����
		if (!result[i])
			cnt = failed_to_alloc(result, i); //�޸� �Ҵ翡 ������ ���, ���ݱ��� �Ҵ��� �޸𸮸� ������ : cnt�� -1�̴� �ݺ����� ���������� ��
		i++; //result�� �ε����� ������Ű��
		s += size; //���ڿ��� �ּҸ� size��ŭ ������Ŵ
	}
	if (cnt == -1) //�߰��� �޸��Ҵ翡 �����ߴ� ���, NULL�� ��ȯ
		return (0);
	result[i] = 0; //���ڿ��� NULL�� �ݰ�,
	return (result); //result�� ��ȯ
}

static int	get_size(char const *s, char c)
{ //���ڿ��� ũ�⸦ ���ϴ� �Լ�
	int	size;

	size = 0;
	while (s[size] && s[size] != c)
		size++;
	return (size);
}

static char	*ft_strndup(char const *s, int size)
{ //���ڿ��� size��ŭ ���� ũ�⸦ �Ҵ��ϰ� �����ϴ� �Լ�
	int		i;
	char	*result;

	result = (char *) malloc (size + 1);
	if (!result)
		return (0);
	i = 0;
	while (s[i] && i < size)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = 0;
	return (result);
}

static int	ft_cnt_split(char const *s, char c)
{ //���ڿ��� �� ���� �ɰ����� ���� ���ϴ� �Լ�
	int	cnt;
	int	flag;

	cnt = 0;
	flag = 0; //���� ���ڿ��� ���������� �ƴ����� Ȯ���ϴ� flag
	while (*s) //���ڿ��� ������ �ݺ�
	{
		if (*s != c) //���ڿ��� ���� ���ڰ� �����ڰ� �ƴϰ�
		{
			if (!flag) // ���� ���ڿ��� �����ڿ��ٸ�
				cnt++; //���ڿ��� ������ ����
			flag = 1;
		}
		else
			flag = 0; //���� ���ڰ� �����ڶ�� flag�� 0���� ����
		s++;
	}
	return (cnt);
}

static int	failed_to_alloc(char **result, int index)
{ //�޸� �Ҵ翡 �������� ��, ���ݱ��� �Ҵ��� �޸𸮸� �����ϰ� -1�� ��ȯ�ϴ� �Լ�
	int	i;

	i = 0;
	while (i <= index)
		free(result[i++]);
	free(result);
	return (-1);
}
