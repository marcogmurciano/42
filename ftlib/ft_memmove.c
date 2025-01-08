/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-03 19:47:47 by user              #+#    #+#             */
/*   Updated: 2025-01-03 19:47:47 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *s;
    unsigned char *d;
    unsigned char temp[1024];
    size_t i;

    if (!dest && !src)
        return (NULL);
    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    if (n > sizeof(temp))
        return (NULL);
    i = 0;
    while (i < n)
    {
        temp[i] = s[i];
        i++;
    }
    i = 0;
    while (i < n)
    {
        d[i] = temp[i];
        i++;
    }
    return (dest);
}