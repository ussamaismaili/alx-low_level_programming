#include<stdlib.h>
/**
 * argstostr - function concatenaties all the argumments
 *
 * @ac: size
 * @av: array
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int res;
	char *ptr;
	int e;

	i = 0;
	res = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		res += j;
		i++;
	}

	ptr = malloc(sizeof(char) * (res + ac + 1));
	ptr[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		e = 0;
		while (ptr[e])
			e++;
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[e] = av[i][j];
			e++;
		}
		ptr[e] = '\n';
		ptr[e + 1] = '\0';
	}
	return (ptr);
}
