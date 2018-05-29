#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int nb;

	nb = 0;
	while (str[nb])
		nb++;
	return (nb);
}

int	ft_count_letter(int argc, char **argv)
{
	int i;
	int len;

	i = 1;
	len = 0;
	while (i <= argc - 1)
	{
		len = len + ft_strlen(argv[i]) + 1;
		i++;
	}
	return (len);
}

char	ft_fill_tab(int argc, char **argv, char *tab)
{
	int i;
	int j;
	int k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			tab[k] = argv[i][j];
			j++;
			k++;
		}
		tab[k] = '\n';
		k++;
		i++;
	}
	return (*tab);
}

char	*ft_concat_params(int argc, char **argv)
{
	char *tab;
	int len;

	len = ft_count_letter(argc, argv);
	printf("len = %d\n", len);
	tab = (char *)malloc(sizeof(char) * len + 1);
	*tab = ft_fill_tab(argc, argv, tab);
	tab[len] = '\0';
	return (tab);
}

int	main(int argc,char **argv)
{
	int i;
	char *array;

	i = 0;
	array = ft_concat_params(argc, argv);
	while(array[i])
	{
		printf("%c", array[i]);
		i++;
	}
	return(0);
}
