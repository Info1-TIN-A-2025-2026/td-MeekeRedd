#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 0;
	int b = 0;
	int q = 0;
	int r = 0;

	printf("enter a: ");
	scanf("%d", &a);

	printf("enter b: ");
	scanf("%d", &b);

	q = a / b;
	r = a % b; // returns the remaining

	printf("a/b = %d\n", q);
	printf("a%%b = %d\n", r);

	a = 10;
	printf("a++ = %d\n", a++); // the increment is done after print

	a = 10;
	printf("++a = %d\n", ++a); // the imcrement is done before print

	char x = 127;
	x++; // risk of overflow (x = -128)

	
	return 0;
}