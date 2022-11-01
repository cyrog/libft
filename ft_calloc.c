/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:33:55 by cgross            #+#    #+#             */
/*   Updated: 2022/11/01 18:23:51 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The calloc() function contiguously allocates enough space for count
     objects that are size bytes of memory each and returns a pointer to the
     allocated memory.  The allocated memory is filled with bytes of value
     zero.
	 */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	ret = malloc(sizeof(size) * count);
	if (!ret)
		return (NULL);
	ft_bzero(ret, count * size);
	return (ret);
}
