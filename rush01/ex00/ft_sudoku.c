/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyazdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 18:36:33 by kyazdani          #+#    #+#             */
/*   Updated: 2017/07/16 23:35:23 by mgatier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char **str)
{
	int		i;
	int		y;

	i = 1;
	y = 0;
	while (i < 10)
	{
		while (y < 9)
		{
			ft_putchar(str[i][y]);
			ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		i++;
		y = 0;
	}
}

int		ft_resolution(char **str, int position)
{
	int		line;
	int		cols;
	char	nb;

	line = (position / 9) + 1;
	cols = position % 9;
	nb = '1';
	if (position == 81)
		return (1);
	if (str[line][cols] != '.')
		return (ft_resolution(str, position + 1));
	while (nb <= '9')
	{
		if (line_test(line, cols, nb, str)
		&& bloc_test(line, cols, nb, str)
		&& cols_test(line, cols, nb, str))
		{
			str[line][cols] = nb;
			if (ft_resolution(str, position + 1))
				return (1);
		}
		nb++;
	}
	str[line][cols] = '.';
	return (0);
}
