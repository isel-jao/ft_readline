/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao <isel-jao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:31:54 by isel-jao          #+#    #+#             */
/*   Updated: 2020/10/26 10:40:05 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;

	p = s;
	while ((int)--len >= 0)
		*p++ = (unsigned char)c;
	return (s);
}
