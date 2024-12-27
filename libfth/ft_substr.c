/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:56:26 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/10 11:31:26 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	st_len;
	char	*pt_cop;

	if (!s)
		return (NULL);
	st_len = ft_strlen(s);
	if (len > (st_len - start))
		len = st_len - start;
	if (start >= st_len)
		return (ft_strdup(""));
	pt_cop = (char *)malloc((len + 1) * sizeof(char));
	if (pt_cop == NULL)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		pt_cop[i] = s[start + i];
		i++;
		len--;
	}
	pt_cop[i] = '\0';
	return (pt_cop);
}
