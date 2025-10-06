#include <stdio.h> // printf and scanf
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	unsigned char num_students = 23;
	unsigned char num_chairs = 32;
	short delta =  num_chairs - num_students;

	bool sw1 = true; // Prof Light
	bool sw2 = false; // Room Light

	unsigned char state = (sw2 << 4) + sw1;

	//printf (FORMAT and chain od characters, VARIABLE to print)
	printf("Number of students = %d\n", num_students); //%d decimal base

	// double variable print on screen
	printf("Number of students = %d\n" "Number of Chairs = %d\n", num_students, num_chairs); //%d decimal base

	// for short base 10 %hd
	printf("Delta = %hd\n", delta); //%d decimal base

	// for the boolean
	printf("Sw1 state = %d\n", sw1);
	printf("Sw2 state = %d\n", sw2);

	//state unsigned char
	printf("Main state = %X (base 16)\n", state);
	printf("Main state = %d (base 10)\n", state);
	printf("Main state = %o (base 8)\n", state);

	char a = 'A'; //ASCII code 'A' (65) -> A
	printf("a= %d\n", a); // =65
	printf("a= %c\n", a); // =A

	char b = 112; // ASCII  code 'p'
	printf("b= %c\n", b); // =p

	return 0;
}