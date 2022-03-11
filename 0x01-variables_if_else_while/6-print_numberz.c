#include <stdio.h>
/**
 *  *main-program entry point.
 *   *Return:0 if no errors, non-zero if errors.
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
