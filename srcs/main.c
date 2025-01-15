/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 08:35:39 by mlancelo          #+#    #+#             */
/*   Updated: 2025/01/15 19:45:35 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

#include <stdio.h>

int	main(int argc, char **argv, char **envp)
{
	if	(argc != 5)
		return (0);
//1
	int	index_path;
	index_path = check_path(envp);
//2
	char	*val_check_cmd[2];
	val_check_cmd[0] = check_cmd(argv[2], envp[index_path]);
	val_check_cmd[1] = check_cmd(argv[3], envp[index_path]);
	if (val_check_cmd[0] == NULL || val_check_cmd[1] == NULL)
		printf("Error\n");
	printf("%s\n%s", val_check_cmd[0], val_check_cmd[1]);
	return 0;
}
