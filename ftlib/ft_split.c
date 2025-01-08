/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-06 12:27:23 by user              #+#    #+#             */
/*   Updated: 2025-01-06 12:27:23 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int count_char(char *str, char c)
{
    int i;

    i = 0;
    while (*str)
    {
        if (*str == c)
            i++;
        str++;
    }
    return (i);
}

char **ft_split(char const *s, char c)
{
    char *str;
    int i;
    int j;
    char **strings;

    i = 0;
    j = 0;
    ft_memcpy(str, s);
    ft_strtrim(str, c);
    strings = (char **)malloc(ft_strlen(str) - count_char(str) * sizeof(char *));
    while (str[i] != '\0')
    {
        if (str[i] = c)
        {

        }
        else
        {

        }
    }
}