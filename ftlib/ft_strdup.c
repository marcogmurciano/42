/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 20:52:01 by marco             #+#    #+#             */
/*   Updated: 2024/12/28 21:13:41 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putstr(char *str)
{
	while(*str)
	{
		write(1,str,1);
		str++;
	}
}

int ft_strlen(const char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

char *ft_strdup(char *s)
{
	char 	*result;
	int 	i;
	
	if (s == NULL || ft_strlen(s) == 0)
	{
		ft_putstr("error: not a valid pointer in ft_strdup");
		return (NULL);
	}
	i = 0;
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
    	return NULL;
	while (s[i] != '\0')
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}