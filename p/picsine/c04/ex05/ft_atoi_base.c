/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:39:14 by tsaldias          #+#    #+#             */
/*   Updated: 2023/09/07 11:41:41 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi(char *str, int base_len, char *base)
{
	int	i;
	int	sign;
	int	value;
	int	val;

	i = 0;
	value = 0;
	sign = 1;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (in_base(str[i], base) >= 1 && str[i] != '\0')
	{
		val = in_base(str[i], base);
		value = (base_len * value) + val;
		i++;
	}
	return (value * sign);
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

int	ft_atoi_base(char *str, char *base)
{
	int	val;

	if (!(base == NULL || *base == '\0'))
	{
		if (contains_duplicate(base))
			return (0);
		val = ft_atoi(str, ft_strlen(base), base);
		return (val);
	}
	return (0);
}
