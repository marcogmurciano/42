/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:45:45 by marco             #+#    #+#             */
/*   Updated: 2025/01/23 20:42:05 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*transformed_number;

	transformed_number = ft_itoa(n);
	if (fd < 0 || !transformed_number)
		return ;
	ft_putstr_fd(transformed_number, fd);
	free(transformed_number);
}
