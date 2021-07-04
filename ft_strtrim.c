/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 06:47:56 by aymane            #+#    #+#             */
/*   Updated: 2021/07/04 07:46:28 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_start(char const *s1, char const *set)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	j = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			{
				len++;
				break ;
			}
			j++;
		}
		if (j == (int)ft_strlen(set))
			break ;
		i++;
	}
	return (len);
}

int	size_end(char const *s1, char const *set)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = ft_strlen(s1) - 1;
	j = 0;
	while (i >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			{
				len++;
				break ;
			}
			j++;
		}
		if (j == (int)ft_strlen(set))
			break ;
		i--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len_s1;
	int		len_rslt;
	char	*rslt;

	if (!s1)
		return (NULL);
	start = size_start(s1, set);
	end = size_end(s1, set);
	len_s1 = ft_strlen(s1);
	len_rslt = len_s1 - start - end + 1;
	if (len_rslt < 0)
		len_rslt = 0;
	rslt = (char *)malloc(len_rslt * sizeof(char));
	if (!rslt)
		return (NULL);
	ft_strlcpy(rslt, &s1[start], len_rslt);
	return (rslt);
}
