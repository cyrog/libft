/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:44:39 by cgross            #+#    #+#             */
/*   Updated: 2022/10/25 19:22:05 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	const char *source;
	size_t	i;

	dest = (char *)dst;
	source = (const char *)src;
	i = 0;
	while (i < len)
	{
		dest[i] = source[i];
		i++;
	}
	return ((unsigned char *)dst);
}
