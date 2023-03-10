/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:39:17 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_itoa_size(long nbr)
{
	int		size;

	size = 1;
	if (nbr < 0)
		size++;
	while (nbr / 10 != 0)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

static void	ft_itoa_fill(char *sptr, int *index, long nbr)
{
	if (nbr >= 10)
	{
		ft_itoa_fill(sptr, index, nbr / 10);
		ft_itoa_fill(sptr, index, nbr % 10);
	}
	else
	{
		sptr[*index] = nbr + '0';
		(*index)++;
	}
}

/**
 * Alloue et retourne une chaine de caractères représentant
 * l’integer reçu en argument.
 *
 * \param	n	L'entier signé à convertir
 * \return		La chaine de caractères représentant l’entier signé.
 */
char	*ft_itoa(int n)
{
	char	*sptr;
	int		index;
	long	nbr;

	nbr = n;
	sptr = (char *) ft_calloc(ft_itoa_size(nbr) + 1, 1);
	if (!sptr)
		return (NULL);
	index = 0;
	if (nbr < 0)
	{
		sptr[index++] = '-';
		nbr *= -1;
	}
	ft_itoa_fill(sptr, &index, nbr);
	sptr[index] = 0;
	return (sptr);
}
