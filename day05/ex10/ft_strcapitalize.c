/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporsenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 14:17:50 by iporsenn          #+#    #+#             */
/*   Updated: 2017/07/20 18:10:45 by iporsenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			i++;
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int cpt;

	i = 0;
	cpt = 0;
	if (!str)
        	return (0);
    str = ft_strlowcase(str);
    while (str[i])
    {
        if((str[i] < 'a' || str[i] > 'z') && !(str[i] >= '0' && str[i] <= '9'))
            cpt = 0;
        else
        {
            cpt++;
            if (cpt == 1 && !(str[i] >= '0' && str[i] <= '9'))
                str[i] -= 32;
        }
        i++;
    }
    return (str);
}

int		main()
{
	char str[70] = "salut comment tu vas 42mots a+b=vatefairefoutre";

	printf("%s", ft_strcapitalize(NULL));
	return (0);
}
