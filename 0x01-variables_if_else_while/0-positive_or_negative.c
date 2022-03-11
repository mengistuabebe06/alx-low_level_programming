#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -main block 
 *Description: get the rundam number and print the number
 *and if the number is postive or negative or zero
 */
int main()
{
		int n;
		srand(time(0));
		n = rand() - RAND_MAX / 2
		if (n>0)
			printf("%i is postive\n", n);
		else if (n < 0)
			printf("%i is negative\n", n);
		else
			printf("%i is zero\n", n);
		return (0);
}
