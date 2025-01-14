/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:16:38 by mlancelo          #+#    #+#             */
/*   Updated: 2024/10/13 20:43:51 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int				i;
	int				rev_digits[11];
	unsigned int	nbu;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	nbu = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbu = -n;
	}
	i = 0;
	while (nbu > 0)
	{
		rev_digits[i] = nbu % 10;
		nbu /= 10;
		i++;
	}
	while (i > 0)
		ft_putchar_fd(rev_digits[--i] + '0', fd);
}
