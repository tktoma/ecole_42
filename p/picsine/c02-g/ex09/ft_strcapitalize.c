/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaldias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:48:19 by tsaldias          #+#    #+#             */
/*   Updated: 2023/08/28 10:05:06 by tsaldias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char *str)
{
	int	new_word;

	new_word = 1;
	while (*str)
	{
		if (is_alpha(*str))
		{
			if (new_word && is_lower(*str))
				*str -= 'a' - 'A';
			else if (!new_word && is_upper(*str))
				*str += 'a' - 'A';
			new_word = 0;
		}
		else if (is_num(*str))
			new_word = 0;
		else 
			new_word = 1;
		str++;
	}
	return (str);
}
