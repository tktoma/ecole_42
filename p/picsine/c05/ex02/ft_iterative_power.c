/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:34:38 by tsaldias          #+#    #+#             */
/*   Updated: 2023/09/08 10:39:18 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	value;

	value = nb;
	if (nb == 0 || power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power != 1)
	{
		value *= nb;
		power--;
	}
	return (value);
}
