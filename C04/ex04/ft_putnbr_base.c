/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 14:12:33 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/08/16 11:35:40 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	lencheck(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		c = i + 1;
		while (str[c])
		{
			if (str[i] == str[c])
				return (0);
			c++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	i;
	int		l;

	l = lencheck(base);
	if (l < 2)
		return ;
	i = nbr;
	if (lencheck(base))
	{
		if (i < 0)
		{
			ft_putchar('-');
			i *= -1;
		}
		if (i < l)
		{
			ft_putchar(base[i]);
			return ;
		}
		ft_putnbr_base(i / l, base);
		ft_putchar(base[i % l]);
	}
}
