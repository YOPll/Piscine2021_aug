/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:35:59 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/08/25 16:26:05 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>
int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*saver;
	int		i;

	i = 0;
	len = ft_len(src);
	saver = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		saver[i] = src[i];
		i++;
	}
	saver[i] = '\0';
	return (saver);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*a;

	(a = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1)));
	if (a == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		a[i].size = ft_len(av[i]);
		a[i].str = av[i];
		a[i].copy = ft_strdup(av[i]);
		i++;
	}
	a[i].str = 0;
	return (a);
}
