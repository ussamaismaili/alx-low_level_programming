#include<stdio.h>
/**
 * print_diagsums - i don't understand this code
 *
 * @a: array of int
 *
 * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s1;
	int s2;

	i = 0;
	s1 = 0;
	s2 = 0;
	while (i < size * size)
	{
		if (i % (size + 1) == 0)
			s1 = s1 + a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			s2 = s2 + a[i];
		i++;
	}
	printf("%d, %d\n", s1, s2);
}
