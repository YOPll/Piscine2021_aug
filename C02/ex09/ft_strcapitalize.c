/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 08:55:44 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/08/11 08:56:58 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sus(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	ft_sus(str);
	while (str[i])
	{
		j = 1;
		if (i == 0)
			c = ';';
		else
			c = str[i - 1];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			j = 0;
		if (c >= '0' && c <= '9')
			j = 0;
		if ((j == 1) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
