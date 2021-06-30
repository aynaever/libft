/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 23:25:03 by anaouadi          #+#    #+#             */
/*   Updated: 2021/06/30 04:56:38 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	while (i < n)
	{
		if (ptr1[i] != (unsigned char)c)
			ptr2[i] = ptr1[i];
		else
		{
			ptr2[i] = (unsigned char)c;
			return (&ptr2[i + 1]);
		}
		i++;
	}
	return (NULL);
}
