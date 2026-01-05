#include <stdio.h>
#include <string.h>

void display(char *t);

int main(int argc, const char *argv[])
{
	char s1[] = "tx kjkt";

	printf("memory size: %ld\n", sizeof(s1));
	printf("num cell: %ld\n", sizeof(s1)/ sizeof(char));
	
	unsigned long count = 0;
	
	while (s1[count] != 0)
	{
		count++;
	}
	printf("string length: %ld\n", count);
	printf("string length: %ld\n", strlen(s1));

	char s2[100] = "mot";

	printf("memory size s2: %ld\n", sizeof(s2));
	printf("string length s2: %ld\n", strlen(s2));

	char *s3 = "YBUJ";

	printf("memory size s3: %ld\n", sizeof(s3)); // Gives the size of the type only since is an address *
	printf("string length s3: %ld\n", strlen(s3));

	char s4[] = "Great circuit — this one is much richer than"
				"a simple RC and gives a second-order "
				"transfer function. Let’s derive it cleanly and rigorously.";

	printf("memory size s4: %ld\n", sizeof(s4)); // Gives the size of the type only since is an address *
	printf("string length s4: %ld\n", strlen(s4));

	char s5[] = "ABC";
	display(s5);

	char s6[][10] = {// 3 x 10 char (9+\0) = 30 bytes in memory
					 "ABC",
					 "DEF",
					 "GHIJKL"};

	char *s7[] = {
		"abc",
		"bjnkl",
		"dewc"};


	return 0;
}

void display( char *t)
{
	for (int i = 0; i < strlen(t) +1 ; i++)
	{
		printf("%3d ", t[i]);
	}

	printf("\n");
	for (int k = 0; k < strlen(t) +1; k++)
	{
		printf("%2c  ", t[k]);
	}
	puts("");
	printf("\n");
}