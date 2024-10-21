/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:31:01 by tsaldias          #+#    #+#             */
/*   Updated: 2023/08/29 10:16:26 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	temp;

	i = 0;
	y = size - 1;
	while (y > i)
	{
		temp = tab[i];
		tab[i] = tab[y];
		tab[y] = temp;
		i++;
		y--;
	}
}
