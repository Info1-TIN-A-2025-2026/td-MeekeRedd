#include <stdio.h>
#include <stdlib.h>

void proc(void); //prototype for proc
void f1(const int a);
double delta(double a, double b, double c);

int main(int argc, const char *argv[])
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	double deltares = 0.0;

	proc();
	f1(2);
	printf("insert 3 values: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	deltares = delta(a, b, c);

	printf("delta is: %lf\n", deltares);
	return 0;
}

void proc(void)
{
	printf("hello");
}

void f1(const int a)
{
	printf("%d\n", a * 3);
}

double delta(const double a,const double b,const double c)
{
	double deltacalc = (b * b) - (4.0 * a * c);
	printf("%lf\n", deltacalc);

	return deltacalc;
}