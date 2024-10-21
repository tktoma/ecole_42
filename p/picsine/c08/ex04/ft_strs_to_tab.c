/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:14:27 by tsaldias          #+#    #+#             */
/*   Updated: 2023/09/07 17:59:57 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*result;

	i = -1;
	j = -1;
	if (ac <= 0 || av == NULL)
		return (NULL);
	result = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (result == NULL)
		return (NULL);
	while (++i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result [i].str = av[i];
		result[i].copy = (char *)malloc((result[i].size) * sizeof(char) + 1);
		if (result[i].copy == NULL)
			return (NULL);
		while (++j <= result[i].size)
			result[i].copy[j] = av[i][j];
	}
	result[ac].str = NULL;
	return (result);
}
