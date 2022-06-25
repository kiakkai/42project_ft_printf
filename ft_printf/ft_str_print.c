/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <kaizhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:45:52 by kaizhang          #+#    #+#             */
/*   Updated: 2022/06/18 16:12:15 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_str_print(char *str)
{
	int		count;

	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (count);
}
