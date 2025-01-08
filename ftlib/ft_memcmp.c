/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-05 13:34:40 by user              #+#    #+#             */
/*   Updated: 2025-01-05 13:34:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int ft_memcmp(const void *b1, const void *b2, size_t len)
{
    const unsigned char *s1 = (const unsigned char *)b1;
    const unsigned char *s2 = (const unsigned char *)b2;
    size_t i;

    i = 0;
    while (i < len)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return 0;
}