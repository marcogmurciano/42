/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-05 12:36:39 by user              #+#    #+#             */
/*   Updated: 2025-01-05 12:36:39 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

void *ft_memchr(const void *b, int c, size_t len)
{
    unsigned char *s;
    size_t i;

    i = 0;
    s = (unsigned char *)b;
    while (i < len)
    {
        if (s[i] == (unsigned char)c)
            return (void *)(b + i);
        i++;
    }
    return NULL;
}