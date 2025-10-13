#include <stdio.h>

int main(int argc, const char *argv[])
{
	/*constants*/
	const double r_YrInterest = 1.5; // annual interest 1.5%
	const double v_volatility = 27.5;

	/*Normal Law and factors*/
	const float a1 = 0.319381530;
	const float a2 = -0.356563782;
	const float a3 = 1.781477937;
	const float a4 = -1.821255978;
	const float a5 = 1.330274429;
	float normalN = 0;

	/* Variables*/
	double stockPrice = 0;
	double strikePrice = 0;
	int daysLeft = 0;
	int ret = 0;

	printf("Insert stock price ($):\n"); // print on screen message
	ret = scanf("%lf", &stockPrice);	 // read value from keyboard

	if (stockPrice < 0 || !ret)
	{
		printf("x= %.4f\n", stockPrice);
		puts("Error: Stock price invalid\n"); // print on screen
	}
	else
	{
		printf("Insert strike price ($):\n"); // print on screen
		ret = scanf("%lf", &strikePrice);	  // read value from keyboard

		if (strikePrice < 0 || !ret)
		{
			printf("x= %.4f\n", strikePrice);
			puts("Error: Strike price invalid\n"); // print on screen
		}

		else
		{
			printf("Enter days left for contract to expire (Days):\n"); // print on screen
			ret = scanf("%d", &daysLeft);								// read value from keyboard

			if (daysLeft < 0 || !ret)
			{
				puts("Error: Days inserted invalid\n"); // print on screen
			}
			else
			{

				/* 				printf("Stock price inserted: %.2f\n", stockPrice);
								printf("Strike price inserted: %.2f\n", strikePrice);
								printf("Days price inserted: %.d\n", daysLeft); */
			}
		}
	}
}

float CalcNormal(int InputValue)
{
	float N = 0.f;
	if (InputValue)
	{
		float k = 1 / (1 + 0.2316419 * InputValue);
		return N = 1 – n(x)(a1 * k + a2 * k ^ 2 + a3 * k ^ 3 + a4 * k ^ 4 + a5 * k ^ 5)
	}
	else
	{
		return 0.f;
	}
}