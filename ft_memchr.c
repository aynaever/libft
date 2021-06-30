/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 00:43:07 by anaouadi          #+#    #+#             */
/*   Updated: 2021/06/30 04:57:22 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	c_mem;

	if (n == 0)
		return (NULL);
	i = 0;
	ptr = (unsigned char *)s;
	c_mem = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == c_mem)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
