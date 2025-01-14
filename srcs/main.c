/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 08:35:39 by mlancelo          #+#    #+#             */
/*   Updated: 2025/01/14 12:03:51 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

#include <stdio.h>

int	main(int argc, char **argv, char **envp)
{
	(void) argc;
	(void) argv;

	int		i;
	char	*chemin_path;
	i = 0;
	while(envp[i])
	{
		chemin_path = ft_strnstr(envp[i], "PATH=", 5);
		i++;
	}
	printf("%s", chemin_path);
	return 0;
}
