/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:31:40 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/16 10:22:52 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*t;

	i = 0;
	t = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
		{
			t = ((char *)(s + i));
		}
		i++;
	}
	if (s[i] == (unsigned char)c)
		t = ((char *)(s + i));
	return (t);
}
