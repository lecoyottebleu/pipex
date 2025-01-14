/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:00:24 by mlancelo          #+#    #+#             */
/*   Updated: 2024/10/11 12:16:45 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = ft_strlen(s);
	if (tmp[i] == '\0' && tmp[i] == (unsigned char)c)
		return (tmp + i);
	while (i != 0)
	{
		if (tmp[i] == (unsigned char)c)
			return (tmp + i);
		i--;
	}
	if (tmp[i] == (unsigned char)c)
		return (tmp + i);
	return (NULL);
}
