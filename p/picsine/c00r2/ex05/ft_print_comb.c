/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:46:39 by tsaldias          #+#    #+#             */
/*   Updated: 2023/08/29 12:03:03 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	numbers[3];

	i = 0;
	while (i <= 999)
	{
		numbers[0] = i / 101;
		numbers[1] = (i / 10) % 10;
		numbers[2] = i % 10;
		if (numbers[0] < numbers[1] && numbers[1] < numbers[2]) 
		{
			numbers[0] = numbers[0] + '0';
			numbers[1] = numbers[1] + '0';
			numbers[2] = numbers[2] + '0';
			write(1, &numbers[0], 1);
			write(1, &numbers[1], 1);
			write(1, &numbers[2], 1);
			if (i < 789) 
			{
				write(1, ", ", 2);
			}
		}
		i++;
	}
}
