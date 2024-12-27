/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:36:26 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/15 20:57:48 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		i;
	size_t		j;
	char		*pt;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup((char *)s2));
	if (!s2)
		return (ft_strdup((char *)s1));
	j = 0;
	i = -1;
	pt = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (pt == NULL)
		return (NULL);
	while (++i < ft_strlen(s1))
		pt[i] = s1[i];
	while (j < ft_strlen(s2))
	{
		pt[i + j] = s2[j];
		j++;
	}
	pt[i + j] = '\0';
	return (pt);
}
