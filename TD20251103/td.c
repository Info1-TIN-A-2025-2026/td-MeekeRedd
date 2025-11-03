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
		w += 10;
		w += n % 10;
		n /= 10;

	} while (n > 0);
	printf("w=%u\n", w);
}