/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 03:03:40 by anaouadi          #+#    #+#             */
/*   Updated: 2021/06/30 22:14:23 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenLittle;

	if (!big || len == 0)
		return (NULL);
	i = 0;
	lenLittle = ft_strlen(little);
	while (big[i] && len - lenLittle > 0)
	{
		j = 0;
		while (little[j])
		{
			if (big[i + j] != little[j])
				break ;
			j++;
		}
		if (j == lenLittle)
			return ((char *)&big[i]);
		i++;
		len--;
	}
	return (NULL);
}
