/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:51:07 by mlancelo          #+#    #+#             */
/*   Updated: 2024/10/16 10:33:28 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	find_size(char const *str, char sep, int i)
{
	int	j;

	j = i;
	while (str[j] != sep && str[j])
		j++;
	return (j - i);
}

static void	ft_strfree(char **str, int i)
{
	while (--i >= 0)
		free (str[i]);
	free (str);
	str = NULL;
	return ;
}

static char	*allocate_word(char const *s, char c, size_t *i)
{
	size_t	size;
	char	*word;

	size = find_size(s, c, *i);
	word = malloc(sizeof(char) * (size + 1));
	if (word)
	{
		ft_strlcpy(word, &s[*i], size + 1);
		*i += size;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	int		j;

	i = 0;
	str = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (str == NULL)
		return (NULL);
	j = -1;
	while (s[i])
	{
		if (s[i] != c)
		{
			str[++j] = allocate_word(s, c, &i);
			if (str[j] == NULL)
			{
				ft_strfree(str, j);
				return (NULL);
			}
		}
		else
			i++;
	}
	str[++j] = NULL;
	return (str);
}
