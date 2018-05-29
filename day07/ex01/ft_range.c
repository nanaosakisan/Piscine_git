/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 13:57:09 by iporsenn          #+#    #+#             */
/*   Updated: 2017/07/24 18:12:41 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *index;
	int len;
	int i;

	len = max - min;
	i = 0;
	if (min >= max) 
		return (0);
	else
	{
		index = (int *)malloc(sizeof(int) * len);
		while (min < max)
		{
			index[i] = min;
			min++;
			i++;
		}
	}
	return (index);
}

int		main()
{
	int i;
	int	*array;
	
	i = -1;
	array = ft_range(0, 0);
	while (++i < 10)
		printf("%d\n", array[i]);
	return (0);
}
