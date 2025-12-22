#include <stdio.h>
#include <string.h>


int test2(const int n);
int test(const char *str);

int main(int argc, const char *argv[])
{
	//test(12);
	test("prerfasdeokinbvgtedoesirefa");
	return 0;
}

int test2(const int n) // find perfect numbers
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

int test(const char *str)
{

	char vowels[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
	int amount = 0;
	if (strcmp(str, "NULL") == 0)
	{
		return -1;
	}
	else if (strcmp(str, "") == 0)
	{
		return 0;
	}
	//printf("size of letter %ld\n", strlen(str));
	for (int let = 0; let < strlen(str); let++)
	{

		//printf("shit letter %c\n", str[let]);
		for (int vow = 0; vow < 10; vow++)
		{
		if (vowels[vow] == str[let])
		{
			//printf("fucking vowels %c\n", vowels[vow]);
			amount++;
		}
		}
		

	}

	//printf("amount = %d\n", amount);
	return amount;
}
