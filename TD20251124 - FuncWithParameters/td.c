#include <stdio.h>
#include <math.h>

int f(unsigned int t, int *a, int *b, int *c);

int main(int argc, const char *argv[])
{
	int h = 0;
	int m = 0;
	int s = 0;
	unsigned int t = 3630;

	int r = f(t, &h, &m, &s);
	
	printf("address of h=%p\n", &h); // print the address 
	printf("address of m=%p\n", &m); // print the address 
	printf("address of s=%p\n", &s); // print the address 

	printf("h= %d\n", h); // print the address 
	printf("m= %d\n", m); // print the address 
	printf("s= %d\n", s); // print the address 


	return 0;
}

int f(unsigned int t, int *a, int *b, int *c)

{

	int h = t / 3600;
	int m = (t / 3600) / 60;
	int s = t % 60;

	*a = h;
	*b = m;
	*c = s;

	printf("a= %p\n", a);
	printf("b= %p\n", b); 
	printf("c= %p\n", c);

	return 0;
}

void c2p (const double x, const double y, double *rho, double *theta)
{
	*theta = atan2(y, x);
	*rho = sqrt((x * x) + (y * y));
}