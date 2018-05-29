/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exceptions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyazdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 21:24:17 by kyazdani          #+#    #+#             */
/*   Updated: 2017/07/16 23:38:20 by mgatier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		arg_test(int n)
{
	if (n == 10)
		return (1);
	else
		return (0);
}

int		arg_col_test(int line, int cols, char **str)
{
	while (line < 10)
	{
		while (str[line][cols] != '\0')
			cols++;
		if (cols != 9)
			return (0);
		line++;
		cols = 0;
	}
	line = 1;
	return (1);
}

int		number_test(int line, int cols, char **str)
{
	while (line < 10)
	{
		while (cols < 9)
		{
			if (!(str[line][cols] >= '1' && str[line][cols] <= '9') &&
				str[line][cols] != '.')
				return (0);
			cols++;
		}
		line++;
		cols = 0;
	}
	line = 1;
	return (1);
}

int		double_test(int line, int cols, char **str)
{
	char		nb;

	nb = 0;
	while (line < 10)
	{
		while (cols < 9)
		{
			if (str[line][cols] >= '1' && str[line][cols] <= '9')
			{
				nb = str[line][cols];
				str[line][cols] = '.';
				if (!(line_test(line, cols, nb, str)) ||
					!(cols_test(line, cols, nb, str)) ||
					!(bloc_test(line, cols, nb, str)))
					return (0);
				str[line][cols] = nb;
			}
			cols++;
		}
		cols = 0;
		line++;
	}
	return (1);
}
