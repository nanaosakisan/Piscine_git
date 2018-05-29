/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 19:45:16 by iporsenn          #+#    #+#             */
/*   Updated: 2017/07/22 19:55:42 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = argc - 1;
	if (argc >= 2)
	{
		while (j >= 1)
		{
			while (argv[j][i])
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			ft_putchar('\n');
			i = 0;
			j--;
		}
	}
	return (0);
}
