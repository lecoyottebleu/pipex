/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:23:00 by mlancelo          #+#    #+#             */
/*   Updated: 2024/10/15 15:01:09 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	len_tmp;

	len_tmp = ft_strlen(s) - start;
	if (len_tmp > len)
		len_tmp = len;
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	str = ft_calloc(sizeof(char), len_tmp + 1);
	if (!str)
		return (NULL);
	while (s[start + i] && i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
