/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 10:02:08 by iporsenn          #+#    #+#             */
/*   Updated: 2017/07/07 15:29:46 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_num(int n1, int n2)
{
	ft_putchar(n1 / 10 + '0');
	ft_putchar(n1 % 10 + '0');
	ft_putchar(' ');
	ft_putchar(n2 / 10 + '0');
	ft_putchar(n2 % 10 + '0');
	if (n1 != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	n2 = 0;
	while (n2 <= 99)
	{
		ft_print_num(n1, n2);
		n2++;
		if (n2 == 99)
		{
			ft_print_num(n1, n2);
			n1++;
			n2 = n1 + 1;
		}
	}
}
