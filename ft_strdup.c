/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 05:29:15 by anaouadi          #+#    #+#             */
/*   Updated: 2021/06/30 05:36:03 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*rslt;
	size_t	len;

	len = ft_strlen(s);
	rslt = (char *)malloc(len + 1);
	if (!rslt)
		return (NULL);
	ft_memcpy(rslt, s, len);
	rslt[len] = '\0';
	return (rslt);
}
