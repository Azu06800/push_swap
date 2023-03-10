/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 13:14:09 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -sign;
	if ((str[i - 1] == '-' || str[i - 1] == '+') && !str[i])
		error();
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			error();
		else
			result = result * 10 + str[i++] - '0';
	}
	if ((sign * result < -2147483648) || (sign * result > 2147483647))
		error();
	return (sign * result);
}
