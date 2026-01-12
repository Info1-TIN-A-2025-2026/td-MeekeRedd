#include <stdio.h>
#include <string.h>


int test2(const int n);
int test3(const char *str);
int test(const int n);
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

unsigned long max_length_high(const char *signal, const unsigned long num_samples) {
    unsigned long counter = 0;
    unsigned long currentchain = 0;
    unsigned long prevChain = 0;
    for( int i = 0; i < num_samples; i++ )
    {
        if (signal[i] == '1')
            {
                currentchain++;
                if(currentchain > prevChain)
                {
                    counter++;
                    prevChain = currentchain;
                }
            }
        else{
            currentchain = 0;
        }
    }
    return counter;
}

unsigned long max_length_low(const char *signal, const unsigned long num_samples) {
    unsigned long counter = 0;
    unsigned long currentchain = 0;
    unsigned long prevChain = 0;
    for( int i = 0; i < num_samples; i++ )
    {
        if (signal[i] == '0')
            {
                currentchain++;
                if(currentchain > prevChain)
                {
                    counter++;
                    prevChain = currentchain;
                }
            }
        else{
            currentchain = 0;
        }
    }
    return counter;
}

unsigned long count_rising_edge(const char *signal, const unsigned long num_samples) {
    unsigned long counter = 0;
    bool isRiseEdge = false;

    for( int i = 0; i < num_samples; i++ )
    {
        if (signal[i] == '1' && !isRiseEdge)
            {
                counter++;
                isRiseEdge = true;
            }
        else if(signal[i]== '0')
		{
            isRiseEdge = false;
        }
    }
    return counter;
}

int main(int argc, const char *argv[])
{
	char s[] = "111010101011001010101011011111010101001010101111111110000000000000000111111111111111111111111000";
	int max = max_length_low(s, sizeof(s));
	printf("%d\n", max);
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

int test3(const char *str) // count number of vowels
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

int test(const int n) //find prime numbers
{
	if (n<=1)
	{
		return 0;
	}
	
	int divisors = 0;
	for (int i = 2; i <= n; i++)
	{
		if ((n % i) == 0)
		{
			divisors++;
		}
	}

	if (divisors == 1)
	{
		return 1;
	}
	
	return 0;
	
}