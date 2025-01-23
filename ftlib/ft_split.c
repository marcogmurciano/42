/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:27:23 by user              #+#    #+#             */
/*   Updated: 2025/01/23 20:41:43 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int	count_char(char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == c)
			i++;
		str++;
	}
	return (i);
}

char	**allocate_memory(int count, size_t len)
{
	char	**strings;

	strings = (char **)malloc((count + 1) * sizeof(char *) + len - count);
	return (strings);
}

void	split_char_found(char **block, int *j, int *l)
{
	**block = '\0';
	(*block)++;
	(*j)++;
	*l = 0;
}

void	fill_strings(char **strings, char const *s, char c)
{
	char	*block;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	l = 0;
	block = (char *)(strings + count_char((char *)s, c) + 2);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (l == 0)
				strings[j] = block;
			*block++ = s[i];
			l++;
		}
		else if (l > 0)
			split_char_found(&block, &j, &l);
		i++;
	}
	if (l > 0)
		*block++ = '\0';
	strings[j + (l > 0)] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		count;
	size_t	len;

	if (!s)
		return (NULL);
	count = count_char((char *)s, c);
	len = ft_strlen(s);
	strings = allocate_memory(count, len);
	if (!strings)
		return (NULL);
	fill_strings(strings, s, c);
	return (strings);
}
