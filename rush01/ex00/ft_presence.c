/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_presence.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyazdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 11:26:47 by kyazdani          #+#    #+#             */
/*   Updated: 2017/07/16 21:46:58 by kyazdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		line_test(int line, int cols, char nb, char **str)
{
	cols = 0;
	while (cols < 9)
	{
		if (str[line][cols] == nb)
			return (0);
		cols++;
	}
	return (1);
}

int		cols_test(int line, int cols, char nb, char **str)
{
	line = 1;
	while (line < 10)
	{
		if (str[line][cols] == nb)
			return (0);
		line++;
	}
	return (1);
}

int		bloc_test(int line, int cols, char nb, char **str)
{
	int		line_mod;
	int		cols_mod;
	int		line_mod0;
	int		cols_mod0;

	line_mod = 3 * ((line - 1) / 3) + 1;
	line_mod0 = 3 * ((line - 1) / 3) + 1;
	cols_mod = 3 * (cols / 3);
	cols_mod0 = 3 * (cols / 3);
	while (line_mod < line_mod0 + 3)
	{
		while (cols_mod < cols_mod0 + 3)
		{
			if (str[line_mod][cols_mod] == nb)
				return (0);
			cols_mod++;
		}
		cols_mod = 3 * (cols / 3);
		line_mod++;
	}
	return (1);
}
