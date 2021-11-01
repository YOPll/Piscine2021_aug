/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <mrx.ga10@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 21:34:11 by yopi              #+#    #+#             */
/*   Updated: 2021/09/03 18:26:55 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	oline(int j, int y)
{
	if (j == 1 || j == y)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	bslash(int j, int y)
{
	if (j == 1 || j == y)
		ft_putchar('|');
	else
		ft_putchar(' ');

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
			if (i == 1 || i == x)
			{
				oline(j, y);
				j++;
			}
			else
			{
				bslash(j, y);
				j++;
			}
		}
		i++;
		ft_putchar('\n');
	}
}
