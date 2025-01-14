/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:26:33 by mlancelo          #+#    #+#             */
/*   Updated: 2024/10/17 12:25:05 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	j;

	if ((!dest || !src) && size == 0)
		return (0);
	dest_len = ft_strlen(dest);
	j = ft_strlen(src);
	if (size == 0 || dest_len > size)
		return (size + j);
	if (!src[0])
		return (dest_len);
	j = 0;
	while (src[j] && (dest_len + j < size - 1))
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + ft_strlen(src));
}
