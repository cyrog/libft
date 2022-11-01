/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:44:39 by cgross            #+#    #+#             */
/*   Updated: 2022/11/01 14:53:28 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	unsigned const char	*source;
	size_t				i;

	dest = (unsigned char *)dst;
	source = (unsigned const char *)src;
	if (!dest && !source)
		return (NULL);
	i = 1;
	if (source < dest)
	{
		while (i <= len)
		{
			dest[len - i] = source[len - i];
			i++;
		}
	}
	else
		ft_memcpy(dest, source, len);
	return (dst);
}
