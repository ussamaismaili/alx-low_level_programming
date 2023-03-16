#include<stdlib.h>
/**
 * alloc_grid - function creat an table
 *
 * @width: input
 * @height: input
 *
 * Return: pointer to pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptt;

	if ((width * height) <= 0)
		return (NULL);

	ptt = malloc(sizeof(int *) * (height));
	if (ptt == NULL)
	{
		free(ptt);
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			ptt[i] = malloc(sizeof(int) * (width));
			if (ptt[i] == NULL)
			{
				for (; i >= 0; i--)
					free(ptt[i]);
				free(ptt);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
				ptt[i][j] = 0;
	}
	return (ptt);
}
