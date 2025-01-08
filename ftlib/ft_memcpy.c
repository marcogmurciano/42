/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-03 19:47:47 by user              #+#    #+#             */
/*   Updated: 2025-01-03 19:47:47 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

void *ft_memcpy(void dest[.n], const void src[.n], size_t n)
{
    unsigned char *s;
    unsigned char *d;
    size_t i;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}