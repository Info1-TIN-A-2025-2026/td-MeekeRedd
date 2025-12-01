#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int levels = 0;

	if (argc < 2 || argc > 2)
	{
		printf("levels not valid\n");
		return 1;
	}

	levels = atoi(argv[1]);

	for (int i = 1; i <= levels; i++)
	{
		for (int c = 0; c < levels - i; c++)
			putchar(' ');
		for (int c = 0; c < (2 * i - 1); c++)
			putchar('*');
		putchar('\n');
	}

	for (int i = 0; i < 2; i++)
	{
		for (int c = 0; c < levels - 1; c++)	putchar(' ');
		puts("|");
	}

	for (int i = 0; i < 1; i++)
	{
		for (int c = 0; c < levels - 2; c++)
			putchar(' ');
		puts("---");
	}
	return 0;
}