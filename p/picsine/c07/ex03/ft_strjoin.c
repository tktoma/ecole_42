 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:34:53 by tsaldias          #+#    #+#             */
/*   Updated: 2023/09/04 11:34:57 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, const char *src)
{
	char	*original_dest;
	int		i;

	i = 0;
	original_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
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

int	char_ptr_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		if (strs != NULL)
			total += ft_strlen(strs[i]);
		if (i < size -1)
			total += ft_strlen(sep);
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_size;
	char	*container;

	total_size = 0;
	i = 0;
	if (size == 0)
	{
		container = (char *)malloc(1);
		container[0] = '\0';
		return (container);
	}
	total_size = char_ptr_len(size, strs, sep);
	container = (char *)malloc(sizeof(char) * total_size + 1);
	*container = '\0';
	i = 0;
	while (i < size)
	{
		if (strs[i] != NULL)
			ft_strcat(container, strs[i]);
		if (i < size - 1)
			ft_strcat(container, sep);
		i++;
	}
	return (container);
}
