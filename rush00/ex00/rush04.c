/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <mrx.ga10@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 22:04:44 by yopi              #+#    #+#             */
/*   Updated: 2021/06/27 22:05:57 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	fline(int j, int y)
{
	if (j == 1 )
		ft_putchar('A');
	else if (j == y)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	mline(int j, int y)
{
	if (j == 1 || j == y)
		ft_putchar('B');
	else
		ft_putchar(' ');

}

void	lline(int j, int y)
{
	if (j == 1 )
		ft_putchar('C');
	else if (j == y)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	rush(int y, int x)
{
	int	i;
	int	j;
	int	MAX;

	MAX = 2147483647;
	if(x > MAX || y > MAX || x < 0 || y < 0)
		return;
	i = 1;
	while (i <= x)
	{
		j = 1;
		while (j <= y)
		{
			if (i == 1)
			{
				fline(j, y);
				j++;
			}
			else if (i == x)
			{
				lline(j, y);
				j++;
			}
			else
			{
				mline(j, y);
				j++;
			}
		}
		i++;
		ft_putchar('\n');
	}
}
