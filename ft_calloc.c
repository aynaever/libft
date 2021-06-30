/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 05:22:32 by anaouadi          #+#    #+#             */
/*   Updated: 2021/06/30 05:28:04 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*rslt;

	rslt = malloc(nmemb * size);
	if (!rslt)
		return (NULL);
	ft_bzero(rslt, (nmemb * size));
	return (rslt);
}
