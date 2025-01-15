/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:02:29 by mlancelo          #+#    #+#             */
/*   Updated: 2025/01/15 19:49:42 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"
#include <stdio.h>

int	check_path(char **env)
{
	int		i;
	char	*chemin_path;

	i = 0;
	chemin_path = NULL;
	while(env[i] && !chemin_path)
	{
		chemin_path = ft_strnstr(env[i], "PATH", 5);
		i++;
	}
	return (i - 1);
}

char	*check_cmd(char *cmd, char *path)
{

	char	**chemin;
	char	*sep;
	char	*tmp;
	char	*cmd_ptr;
	int		i;

	cmd_ptr = ft_strchr(cmd, ' ');
	if (cmd_ptr)
		cmd = ft_substr(cmd, 0, cmd_ptr - cmd);
	sep = "/\0";
	i = 0;
	path += 5;
	chemin = ft_split(path, ':');
	while (chemin[i])
	{
		tmp = ft_strjoin(chemin[i], sep);
		tmp = ft_strjoin(tmp, cmd);
		printf("%s\n", chemin[i]);
		if (access(tmp, F_OK) == 0)
			return (tmp);
		i++;
	}
	return (NULL);
}
