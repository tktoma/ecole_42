/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:18:37 by tsaldias          #+#    #+#             */
/*   Updated: 2023/08/29 13:39:12 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	digits[5];

	i = -1;
	while (i++ < 98)
	{
		j = i;
		while (j++ < 99)
		{
			digits[0] = i / 10 + '0';
			digits[1] = i % 10 + '0';
			digits[2] = ' ';
			digits[3] = j / 10 + '0';
			digits[4] = j % 10 + '0';
			write(1, ", ", 2);
			write(1, digits, 5);
		}
	}
	write(1, "\n", 1);
}
