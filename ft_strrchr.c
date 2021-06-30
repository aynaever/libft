/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 02:57:54 by anaouadi          #+#    #+#             */
/*   Updated: 2021/06/30 05:11:50 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = NULL;
	while (s[i])
	{
		if (s[i] == c)
			temp = (char *)&s[i];
		i++;
	}
	if (c == '\0' && s[i] == c)
		return ((char *)&s[i]);
	return (temp);
}
