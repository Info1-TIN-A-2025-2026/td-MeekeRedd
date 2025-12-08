#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char *argv[])
{
	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", rand()); // 0.... rand_MAX
		/* code */
	}

	printf("%d", RAND_MAX);
	return 0;
}