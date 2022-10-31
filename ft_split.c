/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:06:39 by cgross            #+#    #+#             */
/*   Updated: 2022/10/31 14:29:22 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	matchcount(char const *s, char c, size_t count)
{

	count = 0;
	while (s[count])
	{
		if (s[count] == c)
			return (1);
		count++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (matchcount(&s[i], c,  != 0)
		{
			count++;
