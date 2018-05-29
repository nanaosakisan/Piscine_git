/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 13:18:10 by iporsenn          #+#    #+#             */
/*   Updated: 2017/07/17 09:54:57 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int tmp;

	i = 0;
	tmp = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		tmp = nb * tmp;
		i++;
	}
	return (tmp);
}
