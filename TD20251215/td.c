#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_CELLS 1000
#define MIN_VALUE (-100)
#define MAX_VALUE (100)

#define 

int main(int argc, const char *argv[])
{

	srand(0);
	int minValue = -100;
	int maxValue = 100;

	long n[NUM_CELLS] = {0};

	for (unsigned long i = 0; i < NUM_CELLS; i++)
	{
		float random = (float)rand() / (float)RAND_MAX;
		random = minValue + random * (maxValue - minValue);
		n[i] = random;
		printf("index :%ld %ld\n", i, n[i]);
	}

	for (unsigned long i = 0; i < NUM_CELLS; i++)
	{
		if (n[i] == 93)
		{
			printf("index%ld\n", n[i]);
			break;
		}
	}
	
	return 0;
}