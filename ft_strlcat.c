/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:58:58 by cgross            #+#    #+#             */
/*   Updated: 2022/10/31 19:41:35 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*source;
	size_t	i;
	size_t	len_src;
	size_t	len_dst;
	size_t	res;

	source = (char *)src;
	len_src = ft_strlen(source);
	len_dst = ft_strlen(dst);
	res = 0;
	i = 0;
	if (dstsize > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + dstsize;
	while (source[i] && len_dst + 1 < dstsize)
	{
		dst[len_dst] = source[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}
