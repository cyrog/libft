/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgross <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:31:40 by cgross            #+#    #+#             */
/*   Updated: 2022/10/31 12:47:05 by cgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Same as ft_putchar, requires the file descriptor to write the output as
 * a parameter.
 * If we want to use a file descriptor obtained from the open system call
 * we use 0, 1 or 2 to respectively refer to the standard input,
 * standard output or standard error.
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
