/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:06:39 by cgross            #+#    #+#             */
/*   Updated: 2022/11/01 16:59:32 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nb_string(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			nb++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (nb);
}

static char	*word(char const *s, char c, int start)
{
	int		i;
	int		j;
	int		len;
	char	*word;

	j = start;
	len = 0;
	i = 0;
	while (s[start] != c && s[j])
	{
		start++;
		len++;
	}
	word = malloc(sizeof(char) * len + 1);
	while (s[j] != c && s[j])
		word[i++] = s[j++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	tab = malloc(sizeof(char *) * (get_nb_string(s, c) + 1));
	if (!tab || !s)
		return (0);
	i = 0;
	j = 0;
	while (i < get_nb_string(s, c))
	{
		while (s[j] == c)
			j++;
		tab[i] = word(s, c, j);
		while (s[j] != c)
			j++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
