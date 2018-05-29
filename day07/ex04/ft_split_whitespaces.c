#include <stdlib.h>
#include <stdio.h>

int	ft_words_count(char *str)
{
	int i;
	int cpt;

	i = 0;
	cpt = 0;
	while (str[i])
	{
		if ((str[i] >= 33 && str[i] <= 126) && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n' 
			|| str[i + 1] == '\0'))
			cpt++;
		i++;
	}
	return (cpt);
}

int	ft_letter_count(char *str, int i)
{
	int cpt;

	cpt = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
	{			
		cpt++;
		i++;
	}
	return (cpt);
}

char	*ft_fill_tab(char *str, char *tab, int i, int letters)
{
	int j;
	int k;

	j = 0;
	k = i;
	printf("str : %s\n", str + i);
	while (j < letters)
	{
		tab[j] = str[k];
		j++;
		k++;
          }
	printf("tab : %s\n", tab);
          return (tab);
 }
 
char	**ft_split_whitespaces(char *str)
{
	int words;
	int letters;
	char **tab;
	int i;
	int j;

	words = ft_words_count(str);
	tab = (char **)malloc(sizeof(char *) * words + 1);
	tab[words] = NULL;
	i = 0;
	j = 0;
	while (j < words)
	{
		letters = ft_letter_count(str, i);
		tab[j] = (char *)malloc(sizeof(char) * letters + 1);
		tab[j][letters] = '\0' ;
		tab[j] = ft_fill_tab(str, tab[j], i, letters);
		i = i + letter + 1s;
		j++;
	}
	printf("done\n");
	return (tab);
}

int	main()
{
	char *str;
	char **array;
	int i;
	int j;

	str = "Ceci\nn'est pas		une pipe !";
	array = ft_split_whitespaces(str);
	i = 0;
	j = 0;
	while (array[i])
	{
		j = 0;
		while (array[i][j])
		{
			printf("%c", array[i][j]);
			j++;
		}
		i++;
	}
	return (0);
}
