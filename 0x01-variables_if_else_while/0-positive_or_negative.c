#include <stdio.h>

/**
 * main - entry point
 *
 * Description: posive or negative
 *
 * Return : 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is postive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative", n);
	return (0);
}
