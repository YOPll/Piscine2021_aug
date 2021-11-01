/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 13:17:21 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/08/14 09:43:50 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strleen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l_de;
	unsigned int	l_sr;

	l_de = strleen(dest);
	l_sr = strleen(src);
	if ((l_de > size - 1) || size == 0)
		return (l_sr + size);
	i = l_de;
	while (*src && i < size - 1 )
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (l_de + l_sr);
}
