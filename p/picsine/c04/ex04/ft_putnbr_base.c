/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:52:29 by tsaldias          #+#    #+#             */
/*   Updated: 2023/09/07 11:37:06 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	contains_duplicate(char *str)
{
	int	i;
	int	char_count[256];

	i = 0;
	while (i <= 256)
	{
		char_count[i] = 0;
		i++;
	}
	i = 0;
	while (*str != '\0')
	{
		if (char_count[(unsigned char)*str] == 1)
			return (1);
		if (*str == '-' || *str == '+' || *str <= 31 || *str == 127)
			return (1);
		char_count[(unsigned char)*str]++;
		str++;
		i++;
	}
	if (i <= 1)
	{
		return (1);
	}
	return (0);
}

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

void	ft_putnbr_base_show(int nbr, char *base)
{
	long int	nbrl;
	int			index;
	char		letters[256];

	index = 0;
	nbrl = nbr;
	if (nbrl < 0)
	{
		write(1, "-", 1);
		nbrl *= -1; 
	}
	while (nbrl > 0)
	{
		letters[index] = base[nbrl % ft_strlen(base)];
		nbrl /= ft_strlen(base);
		index++;
	}
	while (index > 0)
	{
		index--;
		write(1, &letters[index], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!(base == NULL || *base == '\0'))
	{
		if (!(contains_duplicate(base)))
		{
			if (nbr == 0)
				write(1, &base[0], 1);
			else
				ft_putnbr_base_show(nbr, base);
		}
	}
}
