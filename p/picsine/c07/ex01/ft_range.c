/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:41:47 by tsaldias          #+#    #+#             */
/*   Updated: 2023/09/03 10:33:01 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	range;

	range = (max - min) - 1;
	if (range <= -1)
	{
		return (NULL);
	}
	tab = (int *)malloc(range * sizeof(int));
	while (range != -1)
	{
		max -= 1;
		tab[range] = max;
		range --;
	}
	return (tab);
}
