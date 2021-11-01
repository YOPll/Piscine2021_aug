/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyacoubi <mrx.ga10@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:01:13 by zyacoubi          #+#    #+#             */
/*   Updated: 2021/08/17 17:49:40 by zyacoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	long int	root;
	long int	num;

	num = nb;
	if (num < 0)
		return (0);
	root = 1;
	while (root * root <= num)
	{
		if (root * root == num)
			return (root);
		root++;
	}
	return (0);
}
