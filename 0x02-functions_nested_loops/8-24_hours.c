#include "main.h"
/**
 * jack_bauer - prints 24h
 *
 */
void jack_bauer(void)
{
	for (int h = 0; h <= 23; h++)
	{
		for (int m = 0; m <= 59; m++)
		{
		printf("%02d:%02d\n", h, m);
		}
	}
}
