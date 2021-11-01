/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:48:51 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/08/22 11:44:53 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	l;
	int	*saver;		

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	l = max - min;
	saver = (int *)malloc(sizeof(int) * l);
	if (!saver)
		return (-1);
	i = 0;
	while (i < l)
	{
		saver[i] = min;
		min++;
		i++;
	}
	*range = saver;
	return (l);
}
