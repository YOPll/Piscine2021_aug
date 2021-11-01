/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:13:07 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/08/23 16:37:54 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
	saver = (char *)malloc(sizeof(char) * (i + 1));
	while (i < len)
	{
		saver[i] = src[i];
		i++;
	}
	saver[i] = '\0';
	return (saver);
}
