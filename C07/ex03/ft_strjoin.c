/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:11:12 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/08/22 11:45:08 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*x;

	x = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (x);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*saver;
	int		i;

	saver = malloc(sizeof(char) * size);
	if (saver == NULL)
		return (NULL);
	if (size == 0)
	{
		saver = malloc(sizeof(char));
		saver = 0;
		return (saver);
	}
	i = 0;
	while (i < size)
	{
		ft_strcat(saver, strs[i]);
		if (i < size - 1)
			ft_strcat(saver, sep);
		i++;
	}
	return (saver);
}
