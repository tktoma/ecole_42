/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:31:17 by tsaldias          #+#    #+#             */
/*   Updated: 2023/08/28 17:32:25 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	const char	*str_ptr;
	const char	*to_find_ptr;

	if (*to_find == '\0')
	{
		return ((char *)str);
	}
	while (*str)
	{
		str_ptr = str;
		to_find_ptr = to_find;
		while (*str_ptr && *to_find_ptr && *str_ptr == *to_find_ptr)
		{
			str_ptr++;
			to_find_ptr++;
		}
		if (*to_find_ptr == '\0')
		{
			return ((char *)str);
		}
		str++;
	}
	return (NULL);
}
