/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao <isel-jao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 23:44:15 by isel-jao          #+#    #+#             */
/*   Updated: 2020/10/26 10:49:37 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		is_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		j;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (is_set(s1[i], set))
		i++;
	while (is_set(s1[j], set) && j)
		j--;
	if (i > j)
		return (ft_strdup(""));
	p = ft_substr(s1, i, j - i + 1);
	return (p);
}
