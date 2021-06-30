/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 03:45:34 by anaouadi          #+#    #+#             */
/*   Updated: 2021/06/30 06:02:47 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_start(const char *s)
{
	int	i;

	i = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == '\r'
		|| s[i] == '\v' || s[i] == '\f' || s[i] == ' ')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	len;
	int	i;
	int	sign;
	int	rslt;

	len = ft_strlen(nptr);
	i = ft_start(nptr);
	rslt = 0;
	sign = 1;
	if (nptr[i] == '-')
	{
		i++;
		sign = -1;
	}
	else if (nptr[i] == '+')
		i++;
	while (i < len)
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
			rslt = nptr[i] + rslt * 10 - 48;
		else
			break ;
		i++;
	}
	return (sign * rslt);
}
