/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:33:56 by cgross            #+#    #+#             */
/*   Updated: 2022/10/31 15:49:21 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The bzero() function writes n zeroed bytes to the string s.  If n is zero,
     bzero() does nothing.
 */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
