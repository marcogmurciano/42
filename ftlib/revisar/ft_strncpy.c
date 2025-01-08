/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoga2 <marcoga2@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-12 18:40:28 by marcoga2          #+#    #+#             */
/*   Updated: 2024/11/13 20:34:46 by marcoga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <unistd.h>

void	ft_putstr(char *str)
{
int	i;

i = 0;
while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}
}

int	main(void)
{
char source[] = "holahola";
char dest[9];

ft_strncpy(dest, source, 9);
ft_putstr(dest);
return (0);
}
*/
