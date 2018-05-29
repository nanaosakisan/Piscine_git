/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 10:37:51 by iporsenn          #+#    #+#             */
/*   Updated: 2017/07/18 09:59:50 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int ret;

	i = 0;
	neg = 0	;
	ret = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
			|| str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (ret * -1);
	return (ret);
}
