/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:50:23 by marco             #+#    #+#             */
/*   Updated: 2025/01/17 15:23:15 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int len;
	char *result;
	unsigned int i;

	if (!s || !f)
        return (NULL);
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
        return (NULL);
	result[len] = '\0';
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}