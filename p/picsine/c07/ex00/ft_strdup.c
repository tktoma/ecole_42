/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:32:37 by tsaldias          #+#    #+#             */
/*   Updated: 2023/09/01 10:40:11 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*duplicate; 

	duplicate = (char *)malloc(ft_strlen(src) + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	duplicate = src;
	return (duplicate);
}
