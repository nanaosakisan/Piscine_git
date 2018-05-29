/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyazdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 21:38:52 by kyazdani          #+#    #+#             */
/*   Updated: 2017/07/16 23:39:12 by mgatier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <unistd.h>

int		main(int argc, char **argv)
{
	int		line;
	int		cols;

	line = 1;
	cols = 0;
	if (arg_test(argc) == 0 || number_test(line, cols, argv) == 0
	|| arg_col_test(line, cols, argv) == 0 ||
	double_test(line, cols, argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
	{
		ft_resolution(argv, 0);
		ft_print(argv);
	}
	return (0);
}
