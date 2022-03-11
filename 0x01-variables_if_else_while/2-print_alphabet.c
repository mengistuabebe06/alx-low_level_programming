#include <stdio.h>

/**
 *  *main-program entry point.
 *   *Return:0-no error,non-zero value-if error.
 *    **/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
