/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:13:01 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/15 21:54:13 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cont_n(int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*pt_cob;
	long	net;

	len = ft_cont_n(n);
	net = n;
	if (net == 0)
		return (ft_strdup("0"));
	pt_cob = (char *)malloc(len + 1);
	if (!pt_cob)
		return (NULL);
	pt_cob[len] = '\0';
	if (net < 0)
	{
		pt_cob[0] = '-';
		net = -net;
	}
	while (net != 0)
	{
		pt_cob[--len] = (net % 10) + '0';
		net /= 10;
	}
	return (pt_cob);
}
