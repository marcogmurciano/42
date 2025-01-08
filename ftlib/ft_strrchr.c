/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoga2 <marcoga2@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-12 18:40:21 by marcoga2          #+#    #+#             */
/*   Updated: 2024/11/13 20:35:13 by marcoga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if (c == '\0')
		return (char *)s + i; 
	while (i > 0)
	{
		if (s[i - 1] == (char)c) 
			return (char *)s + i - 1;
		i--;
	}
	return (NULL); 
}