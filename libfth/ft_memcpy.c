/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:21:11 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/17 20:42:28 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*d;
	const char		*s;
	size_t			i;

	i = 0;
	s = (const char *)src;
	d = (char *)dst;
	if (d == NULL && s == NULL )
		return (NULL);
	if (s == d)
		return (dst);
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
