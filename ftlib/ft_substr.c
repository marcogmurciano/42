/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 18:27:47 by user              #+#    #+#             */
/*   Updated: 2025/01/23 20:39:14 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	dest = malloc(len + 1 * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0' && i < len + start)
	{
		if (i >= start)
			dest[i - start] = s[i];
		i++;
	}
	dest[i - start] = '\0';
	return (dest);
}
