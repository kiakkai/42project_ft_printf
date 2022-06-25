/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <kaizhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:10:59 by kaizhang          #+#    #+#             */
/*   Updated: 2022/06/11 12:13:09 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/* int	fd
 *
 * fd = open("filename", O_RWDR)
 * write(fd, "HELLO!", 6)     1 stdout, 0 stdin, 2 stderr
 * close(fd); */