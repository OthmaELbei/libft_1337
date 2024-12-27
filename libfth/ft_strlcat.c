/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:50:50 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/16 10:37:04 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	t;

	j = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
	{
		return (j);
	}
	i = ft_strlen(dst);
	if (dstsize <= i)
		return (dstsize + j);
	t = 0;
	while (src[t] != '\0' && (i + t + 1) < dstsize)
	{
		dst[i + t] = src[t];
		t++;
	}
	dst[i + t] = '\0';
	return (j + i);
}
