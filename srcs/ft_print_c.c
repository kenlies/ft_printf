/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotsala <aotsala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 04:21:45 by aotsala           #+#    #+#             */
/*   Updated: 2022/11/24 08:39:28 by aotsala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_c(t_data *tab)
{
	char	a;

	a = va_arg(tab->args, int);
	tab->space = tab->width - 1;
	if (tab->width && !tab->dash)
		ft_print_spaces(tab->space);
	tab->tl += write(1, &a, 1);
	if (tab->width && tab->dash)
		ft_print_spaces(tab->space);
	if (tab->space > 0)
		tab->tl += tab->space;
}
