/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-05 19:08:48 by user              #+#    #+#             */
/*   Updated: 2025-01-05 19:08:48 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  char *result;
  size_t len1 = ft_strlen(s1);
  size_t len2 = ft_strlen(s2);

  result = (char *)malloc(len1 + len2 + 1);
  if (!result)
    return NULL;

  ft_memcpy(result, s1, len1); 
  ft_memcpy(result + len1, s2, len2 + 1);

  return result;
}
