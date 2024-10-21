/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:16:15 by tsaldias          #+#    #+#             */
/*   Updated: 2023/08/31 10:48:01 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	diff_val;

	diff_val = 0;
	while (*s1 && *s2 != '\0' && diff_val == 0 && n != 0)
	{
		if (*s1 != *s2)
		{
			diff_val += (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (diff_val == 0 && n > 0)
	{
		diff_val = *s1 - *s2;
	}
	return (diff_val);
}
