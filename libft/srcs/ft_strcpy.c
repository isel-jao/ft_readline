/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao  <isel-jao@student.42.f>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:23:15 by isel-jao          #+#    #+#             */
/*   Updated: 2021/03/15 16:23:32 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strcpy(char *dst, const char *src)
{
	char *ret;

	ret = &(*dst);
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (ret);
}