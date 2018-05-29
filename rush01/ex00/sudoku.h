/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyazdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 21:31:28 by kyazdani          #+#    #+#             */
/*   Updated: 2017/07/16 23:35:44 by mgatier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>

int		arg_test(int n);
int		arg_col_test(int line, int cols, char **str);
int		number_test(int line, int cols, char **str);
int		double_test(int line, int cols, char **str);
int		line_test(int line, int cols, char nb, char **str);
int		cols_test(int line, int cols, char nb, char **str);
int		bloc_test(int line, int cols, char nb, char **str);
void	ft_putchar(char c);
void	ft_print(char **str);
int		ft_resolution(char **str, int position);

#endif
