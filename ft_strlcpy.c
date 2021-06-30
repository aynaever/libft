/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 01:31:05 by anaouadi          #+#    #+#             */
/*   Updated: 2021/06/30 06:39:03 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	saved_size;

	if (!src)
		return (0);
	len = ft_strlen(src);
	saved_size = size;
	i = 0;
	while (src[i] && size > 1)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	if (saved_size != 0)
		dst[i] = '\0';
	return (len);
}
