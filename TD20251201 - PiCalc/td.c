#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[])
{

	if (argc < 2 || argc > 2)
	{
		printf("parameters not valid\n");
		return 1;
	}

	unsigned long n = atol(argv[1]);
	double a = 0.;
	double f = 0.;
	double p = 0.;

	for (unsigned long i = 0; i <= n; i++)
	{
		f = pow(-1,i)/(2*i+1);
		a += f;
	}
	p = 4. * a;
	printf("%10lu : %+10.8lf\n", n, p);
	return 0;
}