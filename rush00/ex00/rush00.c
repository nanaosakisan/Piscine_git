/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cuve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:12:36 by ede-cuve          #+#    #+#             */
/*   Updated: 2017/07/11 14:30:46 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_horizontal(int cptx, int x)
{
	while (cptx < x)
	{
		if (cptx == 0 || cptx == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		cptx++;
	}
}

void	ft_screen(int x, int y)
{
	int cptx;
	int cpty;

	cpty = -1;
	if ((x <= 0 || y <= 0) || (x == 0 && y == 0))
		return ;
	ft_horizontal(0, x);
	ft_putchar('\n');
	while (++cpty < y - 2)
	{
		cptx = -1;
		while (++cptx < x)
		{
			if (cptx == 0 || cptx == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
	if (y > 1)
	{
		ft_horizontal(0, x);
		ft_putchar('\n');
	}
}
