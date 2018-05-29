/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:33:54 by iporsenn          #+#    #+#             */
/*   Updated: 2017/07/10 11:47:36 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_number(int n1, int n2, int n3)
{
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(n3);
	if (n1 != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int n1;
	int n2;
	int n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				ft_number(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	retun ;
	}
}
