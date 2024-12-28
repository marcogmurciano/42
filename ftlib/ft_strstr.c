/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:59:01 by marco             #+#    #+#             */
/*   Updated: 2024/12/28 21:03:38 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(const char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

char *ft_strstr(char *haystack, char *needle)
{
    int i = 0;
    int j;

    if (ft_strlen(needle) == 0)
        return haystack;
    while (haystack[i] != '\0')
	{
        if (haystack[i] == needle[0])
		{
            j = 0;
            while (haystack[i + j] == needle[j] && needle[j] != '\0')
                j++;
            if (needle[j] == '\0')
                return haystack + i;
        }
        i++;
    }
    return NULL;
}

/* int main() {
    char *haystack = "Hola, ¿como estás?";
    char *needle = "om";
    
    char *result = ft_strstr(haystack, needle);
    
    if (result != NULL) {
        printf("todo bien retorna esto: %s\n", result);
    } else {
        printf("Subcadena no encontrada.\n");
    }
    
    return 0;
}
 */