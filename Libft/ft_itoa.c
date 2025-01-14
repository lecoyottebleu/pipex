/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:19:46 by mlancelo          #+#    #+#             */
/*   Updated: 2024/10/15 19:25:06 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	find_size(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
		return (11);
	else if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n >= 10)
	{
		n /= 10;
		size++;
	}
	size++;
	return (size);
}

char	*ft_itoa(int n)
{
	char	*tmp;
	int		i;

	i = find_size(n) - 1;
	if (n == -2147483648)
		return (tmp = ft_strdup("-2147483648"));
	tmp = malloc(sizeof(char) * (find_size(n) + 1));
	if (tmp == NULL)
		return (NULL);
	tmp[i + 1] = '\0';
	if (n < 0)
	{
		tmp[0] = '-';
		n *= -1;
	}
	while (n >= 10)
	{
		tmp[i--] = n % 10 + 48;
		n = n / 10;
	}
	tmp[i] = n + 48;
	return (tmp);
}
