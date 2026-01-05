#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int clampCurrentCharge(int charge, bool* clamped);

int main(int argc, const char *argv[])
{
	srand(0);
	srand(time(NULL));

	if (argc != 5)
	{
		return 1;
	}

	unsigned int batterycurrentCharge = 0;
	unsigned int currentStep = 0;
	unsigned int numOverCharged = 0;
	unsigned int numOverDischarged = 0;

	unsigned int batterycapacity = atoi(argv[1]);
	unsigned int batteryInitialCharge = atoi(argv[2]);
	unsigned int batteryChargeDelta = atoi(argv[3]);
	unsigned int batteryMaxSteps = atoi(argv[4]);

	bool valueClamped = false;

	printf("Battery capacity     : %d\n", batterycapacity);
	printf("Initial charge : %d\n", batteryInitialCharge);
	printf("Charge step(delta) : %d\n", batteryChargeDelta);
	printf("Maximum steps : %d\n", batteryMaxSteps);
	puts("");

	batterycurrentCharge = batteryInitialCharge;

	printf("0 :    %d   (initial state)\n", batterycurrentCharge);

	for (int i = 1; i < batteryMaxSteps+1; i++)
	{
		valueClamped = false;
		if (currentStep >= batteryMaxSteps || batterycurrentCharge <= 0 || batterycurrentCharge >= 100)
		{
			break;
		}

		int random = rand() %3;
		//printf("random is: %d\n", random);

		switch (random)
		{
		case 0:
		//DISCHARGING
			batterycurrentCharge -= batteryChargeDelta;
			batterycurrentCharge = clampCurrentCharge(batterycurrentCharge, &valueClamped);
			
			printf("%d : D  %d",i, batterycurrentCharge);
			if (valueClamped)
			{
				numOverDischarged++;
				printf(" ! ");
			}
			puts("");
			break;
		case 2:
		// charging
			batterycurrentCharge += batteryChargeDelta;
			batterycurrentCharge = clampCurrentCharge(batterycurrentCharge, &valueClamped);
			printf("%d : C  %d",i, batterycurrentCharge);

			if (valueClamped)
			{
				numOverCharged++;
				printf(" ! ");
			}
			puts("");
			break;
		default:
			printf("%d : N  %d\n",i, batterycurrentCharge);
			break;
		}

		currentStep++;
	}

	if (batterycurrentCharge >= 100)
	{
		printf("BATTERY FULL after %d steps\n", currentStep);
		printf("Over - discharge attempts : %d\n", numOverDischarged);
		printf("Over - charge attempts : %d\n", numOverCharged);

	}

	else if (batterycurrentCharge <= 0)
	{
		printf("BATTERY EMPTY after %d steps\n", currentStep);
		printf("Over - discharge attempts : %d\n", numOverDischarged);
		printf("Over - charge attempts : %d\n", numOverCharged);
	}
	else{
		
		
		printf("SIMULATION STOPPED after %d steps\n", currentStep);
		printf("Final charge : %d\n", batterycurrentCharge);
		printf("Over - discharge attempts : %d\n", numOverDischarged);
		printf("Over - charge attempts : %d\n", numOverCharged);
	}
	
	return 0;
}

int clampCurrentCharge(int charge, bool* clamped)
{
			if (charge <= 0)
			{
				*clamped = true;
				return 0;
			}
			else if (charge >= 100)
			{
				*clamped = true;
				return 100;
			}
			*clamped = false;
			return charge;
}