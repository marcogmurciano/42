/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-04 17:49:42 by user              #+#    #+#             */
/*   Updated: 2025-01-04 17:49:42 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t src_len;
    size_t dst_len;

    i = 0;
    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    if (size > 0)
    {
        while (i < size - 1 && src[i] != '\0')
        {
            dst[dst_len + i] = src[i];
            i++;
        }
        dst[dst_len + i] = '\0';
    }
    return (src_len + dst_len);
}