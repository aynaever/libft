/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 03:40:36 by anaouadi          #+#    #+#             */
/*   Updated: 2021/06/30 06:47:55 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (!ptr1[i] || !ptr2[i])
		return (ptr1[i] - ptr2[i]);
	while (i < n)
	{
		if (ptr1[i] != ptr2[i] || !ptr1[i] || !ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
