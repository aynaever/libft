/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:30:04 by aymane            #+#    #+#             */
/*   Updated: 2021/07/04 07:46:48 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	ssize_t	i;
	size_t	len_s;
	char	*rslt;

	if (!s)
		return (NULL);
	i = 0;
	len_s = ft_strlen(s);
	rslt = (char *)malloc(len_s * sizeof(char) + 1);
	if (!rslt)
		return (NULL);
	while (s[i])
	{
		rslt[i] = f(i, s[i]);
		i++;
	}
	rslt[i] = '\0';
	return (rslt);
}
