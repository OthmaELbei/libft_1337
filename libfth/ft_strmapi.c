/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:10:03 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/16 09:37:19 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*pt;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	pt = (char *)malloc((len + 1));
	if (pt == NULL)
		return (NULL);
	while (len > i)
	{
		pt[i] = f(i, s[i]);
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
