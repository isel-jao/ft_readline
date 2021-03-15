/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao <isel-jao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 23:29:38 by isel-jao          #+#    #+#             */
/*   Updated: 2020/12/06 22:19:34 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb < 10)
		ft_putchar_fd(nb % 10 + 48, fd);
	else 
	{
		ft_putnbr_fd(nb / 10 , fd);
		ft_putchar_fd(nb % 10 + 48, fd);
	}
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
		ft_putchar(nb % 10 + 48);
	else 
	{
		ft_putnbr(nb / 10 );
		ft_putchar(nb % 10 + 48);
	}
}
