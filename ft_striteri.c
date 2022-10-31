/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:46:03 by cgross            #+#    #+#             */
/*   Updated: 2022/10/31 15:48:30 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * s: La chaîne de caractères sur laquelle itérer.
 * f: La fonction à appliquer à chaque caractère.
 *
 * Applique la fonction ’f’ à chaque caractère de la
 * chaîne de caractères transmise comme argument,
 * et en passant son index comme premier argument.
 * Chaque caractère est transmis par adresse à ’f’
 * afin d’être modifié si nécessaire
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
