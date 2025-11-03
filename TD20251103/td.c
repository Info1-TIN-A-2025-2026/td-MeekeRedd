#include <stdio.h>
#include <stdlib.h> //for atoi

int main(int argc, const char *argv[])
{

	/* 	const unsigned int BASE = 10;

		unsigned int n = atoi(argv[1]); // n>0 not tested
		unsigned int w = 0;

		while (n > 0)
		{
			n /= BASE;
			w++;
		}

		printf("w: %d\n", w); */

	unsigned int n = atoi(argv[1]);
	unsigned int w = 0;

	do
	{
		//each loop multiply with 10 and add the modulus
		w = w * 10;
		w = w + (n % 10); // modulo return the reminder from the division

		//each loop devide by 10
		n = n / 10;

	} while (n > 0);
	printf("w=%u\n", w);
}