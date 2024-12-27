/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:03:23 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/17 20:39:53 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*s;
	char		*d;

	if (dst == NULL && src == NULL)
		return (NULL);
	s = (const char *)(src);
	d = (char *)(dst);
	if (d == s)
		return (d);
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		i = 0;
		while (len > i)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
