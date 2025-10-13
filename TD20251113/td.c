#include <stdio.h>

int main(int argc, const char *argv[])
{
	/*constants*/
	const double r_YrInterest = 1.5; // annual interest 1.5%
	const double v_volatility = 27.5;

	/*Normal Law and factors*/
	float normalN = 0;
	float d1Delta = 0;
	float d2Delta = 0;

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

float CalcNormal(float InputValue)
{
	float a1 = 0.319381530;
	const float a2 = -0.356563782;
	const float a3 = 1.781477937;
	const float a4 = -1.821255978;
	const float a5 = 1.330274429;

	float N = 0.f;
	if (InputValue)
	{
		float k = 1 / (1 + 0.2316419 * InputValue);
		return N = 1 - InputValue * (a1 * k + a2 * k * k + a3 * k * k * k + a4 * k * k * k * k + a5 * k * k * k * k * k);
	}
	else
	{
		return 0.f;
	}
}