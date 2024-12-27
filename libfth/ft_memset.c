/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:47:15 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/18 09:50:22 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p1;

	p1 = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		p1[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
