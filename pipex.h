#ifndef PIPEX_H
# define PIPEX_H

# include "Libft/libft.h"
# include <unistd.h>

int		main(int argc, char **argv, char **envp);
int		check_path(char **envp);
char	*check_cmd(char *cmd, char *path);

#endif
