/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 09:55:15 by tsaldias          #+#    #+#             */
/*   Updated: 2023/09/04 10:16:12 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	value;

	i = 0;
	value = min;
	if (min >= max)
	{
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	while (value < max)
	{
		(*range)[i] = value;
		value++;
		i++;
	}
	return (max - min);
}
