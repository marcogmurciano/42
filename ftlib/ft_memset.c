/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-03 18:36:42 by user              #+#    #+#             */
/*   Updated: 2025-01-03 18:36:42 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

void *ft_memset(void s[.n], int c, size_t n)
{
    unsigned char *p;
    size_t i;

    p = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return (s);
}