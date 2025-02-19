/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:36:45 by tsaldias          #+#    #+#             */
/*   Updated: 2023/09/08 10:36:47 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	x;
	int	y;

	x = nb;
	y = 1;
	if (nb < 0)
		return (0);
	while (x > y)
	{
		x = (x + y) / 2;
		y = nb / x;
	}
	if (x * x == nb)
		return (x);
	return (0);
}
