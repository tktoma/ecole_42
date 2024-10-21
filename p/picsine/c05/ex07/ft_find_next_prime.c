/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:38:32 by tsaldias          #+#    #+#             */
/*   Updated: 2023/09/08 10:46:18 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	while (i < nb / 2 + 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = nb;
	if (i % 2 == 0)
		i += 1;
	while (!ft_is_prime(i))
	{
		if (i > 2147483647)
			return (0);
		else if (i % 2 == 0)
			i += 1;
		else if (i != 2)
			i += 2;
	}
	return (i);
}
