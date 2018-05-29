#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	len = max - min;
	if (!(*range = (int *)malloc(sizeof(int) * len)))
		return (0);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (len);
}

int	main()
{
	int *array;
	int i;

	i = -1;
	array = NULL;
	printf("%d\n", ft_ultimate_range(&array, -5, 6));
	while (++i < 11)
		printf("%d\n", array[i]);
	return (0);
}
