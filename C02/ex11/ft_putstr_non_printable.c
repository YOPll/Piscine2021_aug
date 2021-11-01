/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:47:15 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/08/10 15:13:29 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex(unsigned char x)
{
	char	*hex;
	int		i;
	int		j;

	hex = "0123456789abcdef";
	i = x / 16;
	j = x % 16;
	ft_putchar(hex[i]);
	ft_putchar(hex[j]);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	x;

	i = 0;
	while (str[i])
	{
		x = str[i];
		if (x < 32 || x >= 127)
		{
			ft_putchar('\\');
			hex(x);
		}
		else
			ft_putchar(x);
		i++;
	}
}
