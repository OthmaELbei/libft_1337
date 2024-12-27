/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 08:56:39 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/16 10:07:14 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	value;

	value = (unsigned char ) c;
	ptr = (unsigned char *) s;
	i = 0 ;
	while (i < n)
	{
		if (ptr[i] == value)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}
