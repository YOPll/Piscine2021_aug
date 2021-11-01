/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:13:43 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/08/16 14:10:21 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	indexer(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	base_true(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+'
			|| str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\r'
			|| str[i] == '\f' || str[i] == ' ')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	l;
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	i = 0;
	l = base_true(base);
	if (l < 2)
		return (0);
	while ((*str <= 13 && *str >= 9 ) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	while (*str)
	{
		i = indexer(*str, base);
		if (i == -1)
			break ;
		res = (res * l) + i;
		str++;
	}
	return (res * sign);
}
