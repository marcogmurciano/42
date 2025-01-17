/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:32:28 by user              #+#    #+#             */
/*   Updated: 2025/01/10 15:04:44 by marco            ###   ########.fr       */
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
    return (pointer);
}
