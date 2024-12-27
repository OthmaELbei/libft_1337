/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:03:22 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/16 10:00:09 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*pt;

	i = 0;
	if (size != 0 && count > (SIZE_MAX / size))
		return (NULL);
	pt = malloc(count * size);
	if (pt == NULL)
	{
		return (NULL);
	}
	ft_bzero(pt, count * size);
	return (pt);
}
