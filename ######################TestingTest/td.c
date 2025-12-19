#include <stdio.h>

int test(const int n);

int main(int argc, const char *argv[])
{
	test(12);
	return 0;
}

int test(const int n)
{
	int sum = 0;

	if (n<= 0 )
	{
		return 0;
	}
	for (int i = 1; i < n; i++)
	{
		int modulo = n % i;
		if (modulo == 0)
		{
			printf("modulo%d\n ", modulo);
			sum = sum + i;
		}
	}
	printf("sum %d", sum);
	if(sum == n)
		return 1;

	return 0;
}
