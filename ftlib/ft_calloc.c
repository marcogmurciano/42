/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-05 17:32:28 by user              #+#    #+#             */
/*   Updated: 2025-01-05 17:32:28 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

void *ft_calloc(size_t number, size_t size)
{
    void    *pointer;
    size_t  i;

    pointer = malloc(size * number);
    if (pointer == NULL)
        return (NULL);
    while (i < number)
    {
        *((char *)pointer + i) = 0;
        i++;
    }
    return pointer
}
