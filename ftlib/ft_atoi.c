/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoga2 <marcoga2@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-17 16:15:21 by marcoga2          #+#    #+#             */
/*   Updated: 2024-11-17 16:15:21 by marcoga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	is_negative;
	int	output;

	if (!str)
		return (0);
	i = 0;
	is_negative = 0;
	output = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		is_negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		output = output * 10 + (str[i] - '0');
		i++;
	}
	if (is_negative)
		output = -output;
	return (output);
}