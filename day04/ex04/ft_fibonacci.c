/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 17:32:59 by iporsenn          #+#    #+#             */
/*   Updated: 2017/07/16 14:21:18 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	if (index >= 47)
		return (0);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
