/**
 * _strlen - count the number of char in a string
 *
 * @s: input string
 *
 * Return: int x number of chars.
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}
