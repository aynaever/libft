/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 22:07:00 by anaouadi          #+#    #+#             */
/*   Updated: 2021/07/04 07:58:25 by anaouadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	is_delimeter(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
	{
		i++;
	}
	return (i);
}

static int	next_delimeter(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	state;
	int	wc;

	i = 0;
	wc = 0;
	state = 0;
	while (s[i])
	{
		if (s[i] == c)
			state = 0;
		else if (state == 0)
		{
			state = 1;
			++wc;
		}
		i++;
	}
	return (wc);
}

char	**ft_split(char const *s, char c)
{
	char	**rslt;
	int		wc;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	wc = count_words(s, c);
	i = 0;
	j = is_delimeter(s, c);
	rslt = (char **)malloc(sizeof(char *) * wc + 1);
	if (!rslt)
		return (NULL);
	while (i < wc)
	{
		rslt[i] = ft_substr(&s[j], 0, next_delimeter(&s[j], c));
		j += next_delimeter(&s[j], c);
		j += is_delimeter(&s[j], c);
		i++;
	}
	rslt[i] = NULL;
	return (rslt);
}
