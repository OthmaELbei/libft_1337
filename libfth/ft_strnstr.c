/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 07:37:23 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/17 20:33:54 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
	{
		return ((char *)(haystack));
	}
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] != '\0'
			&& (i + j) < len && haystack[j + i] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
