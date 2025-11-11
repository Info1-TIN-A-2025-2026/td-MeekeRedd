#include <stdio.h>

/*	CONSTANTS	*/

const float accTrainA = 1.33; // m/s2
const float accTrainB = 0.52;
const int accDurationTrainA = 10;
const int accDurationTRainB = 20;
const int intervalSimulation = 1;

/*	VARIABLES	*/

int currentInterval = 0;
int intervalSet = 60;
float distaceTrainA = 0;
float distaceTrainB = 0;
float speedTrainA = 0;
float speedTrainB = 0;
float deltaDistance = 0;


int main(int argc, const char *argv[])
{

	printf(" t        pA(m)    vA(m/s)        pB(m)    vB(m/s)     ecart(m)\n");
	for (int i = 0; i < intervalSet; i++)
	{
		printf("%2d %10.1f %10.2f %12.1f %10.2f %10.1f\n", i, distaceTrainA, speedTrainA, distaceTrainB, speedTrainB, deltaDistance);
	}

	return 0;
}