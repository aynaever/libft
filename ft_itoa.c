/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 04:37:11 by aymane            #+#    #+#             */
/*   Updated: 2021/06/30 07:12:04 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_nbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		size_nbr;
	long	nbr;

	nbr = (long) n;
	size_nbr = ft_size_nbr(nbr);
	ptr = (char *)malloc(size_nbr + 1);
	if (!ptr)
		return (NULL);
	if (nbr == 0)
		ptr[0] = '0';
	if (nbr < 0)
	{
		ptr[0] = '-';
		nbr = -nbr;
	}
	ptr[size_nbr] = '\0';
	while (nbr)
	{
		size_nbr--;
		ptr[size_nbr] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (ptr);
}
