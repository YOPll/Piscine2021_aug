/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:47:05 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/08/22 11:44:44 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	l;
	int	*saver;

	if (min >= max)
		return (0);
	l = max - min;
	saver = (int *)malloc(sizeof(int) * l);
	if (!saver)
		return (0);
	i = 0;
	while (i < l)
	{
		saver[i] = min;
		min++;
		i++;
	}
	return (saver);
}
