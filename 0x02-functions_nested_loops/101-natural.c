#include<stdio.h>

/**
 * counte_multiples - count the sum of multiples 5 and 6
 *
 * Rentun: Alway void
 */
void counte_multiples(void)
{
	int i;
	int result;

	i = 2;
	result = 0;
	while (i < 1024)
	{
		if (i % 5 == 0 && i % 3 == 0)
			result += i;
		else if (i % 3 == 0)
			result += i;
		else if (i % 5 == 0)
			result += i;
		i++;
	}
	printf("%d\n", result);
}
/**
 * main - function for execution
 *
 * Return: always return 0.
 */
int main(void)
{
	counte_multiples();
	return (0);
}
