#include <stdio.h>

int main(int argc, const char *argv[])
{

	float x = 0.f;
	float y = 0.f;
	int ret = 0;

	/* 	printf("enter float number for x:");
		ret = scanf("%f", &x); // format, address, to x variable
		printf("x= %.4f\n", x);
		printf("ret=%d\n", ret);

		printf("enter float number for y:");
		ret = scanf("%f", &y); // format, address, to y variable
		printf("y=%.4f\n", y);
		printf("ret=%d\n", ret); */

/* 	printf("enter two floating values (space separated)");
	ret = scanf("%f %f", &x, &y);
	printf("y=%.4f\n", x);
	printf("y=%.4f\n", y);
	printf("ret=%d\n", ret);

	printf("enter two floating values (: separated)"); // using : to separate the 2 numbers
	ret = scanf("%f:%f", &x, &y);
	printf("y=%.4f\n", x);
	printf("y=%.4f\n", y);
	printf("ret=%d\n", ret);
 */

	char a = 0;
	scanf("%ld", a);
	return 0;
}