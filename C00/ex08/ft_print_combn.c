/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:59:36 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/08/19 12:50:51 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checker(int *arr, int n)
{
	if (arr[0] == 10 - n)
		return (0);
	return (1);
}

void	print_comb(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (checker(arr, n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	gencomb(int *arr, int n)
{
	int	i;

	i = n - 1;
	while (i > 0)
	{
		if (arr[i] != 10 - n + i)
			break ;
		i--;
	}
	arr[i]++;
	while (++i < n)
		arr[i] = arr[i - 1] + 1;
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	if (!(n > 0 && n <= 9))
		return ;
	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	print_comb(arr, n);
	while (checker(arr, n))
	{
		gencomb(arr, n);
		print_comb(arr, n);
	}
}
