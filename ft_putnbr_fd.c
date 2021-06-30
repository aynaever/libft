/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 06:58:32 by anaouadi          #+#    #+#             */
/*   Updated: 2021/06/30 06:58:34 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (1);
	}
	else if (n == 0)
	{
		write(fd, "0", 1);
		return (0);
	}
	return (-1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	temp;
	int		check;

	temp = ' ';
	check = ft_check(n, fd);
	if (check != -1)
	{
		return ;
	}
	if (n < 0)
	{
		temp = '-';
		write(fd, &temp, 1);
		ft_putnbr_fd((-n), fd);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n <= 9 && n > 0)
	{
		temp = n + 48;
		write(fd, &temp, 1);
	}
}
