/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 09:46:57 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/08/19 11:12:53 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = ac - 1;
	j = 0;
	if (ac > 1)
	{
		while (i != 0)
		{
			while (av[i][j])
			{
				ft_putchar(av[i][j]);
				j++;
			}
			j = 0;
			ft_putchar('\n');
			i--;
		}
	}
}
