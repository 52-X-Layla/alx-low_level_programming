#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	char c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c = c + 1;
	}
	putchar ('\n');
	return (0);
}
