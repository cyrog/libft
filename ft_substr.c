/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:20:17 by cgross            #+#    #+#             */
/*   Updated: 2022/10/26 14:42:40 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Alloue (avec malloc(3)) et retourne une chaîne de
	caractères issue de la chaîne ’s’.
	Cette nouvelle chaîne commence à l’index ’start’ et
	a pour taille maximale ’len’.
	*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start , size_t len)
{
	size_t	i;
	char	*str;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
