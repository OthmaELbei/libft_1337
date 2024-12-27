/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:53:26 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/09 15:01:56 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *d2, size_t n)
{
	size_t	i;

	i = 0;
	if ((!s1 || !d2) && n == 0)
		return (0);
	while (s1[i] == d2[i] && s1[i] && d2[i] && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)d2[i]);
}
