/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 17:53:56 by iporsenn          #+#    #+#             */
/*   Updated: 2017/07/24 13:56:29 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int nb;

	nb = 0;
	while (str[nb])
		nb++;
	return (nb);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *dest;

	dest = (char*)malloc(sizeof(*src) * ft_strlen(src) + 1);
	dest = ft_strcpy(dest, src);
	return (dest);
}
