/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:17:40 by tsaldias          #+#    #+#             */
/*   Updated: 2023/08/31 10:47:15 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	diff_val;

	diff_val = 0;
	while (*s1 && *s2 != '\0' && diff_val == 0)
	{
		if (*s1 != *s2)
		{
			diff_val += (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (diff_val == 0)
	{
		diff_val = *s1 - *s2;
	}
	return (diff_val);
}
