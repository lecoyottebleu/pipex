/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:00:24 by mlancelo          #+#    #+#             */
/*   Updated: 2024/10/17 12:25:59 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;
	char		char_to_find;
	size_t		i;

	i = 0;
	ptr = (const char *)s;
	char_to_find = (char)c;
	while (i < n)
	{
		if (ptr[i] == char_to_find)
		{
			return ((void *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
