/*
 * Main Commands
 *test check with baygon: baygon -v -t t.yaml ./app
 *create executable: make app
 *execute executable: ./app
 *update repository: git commit -am "comment"
 *add new file to directory: git add.
 *update and save repository: git push
 */

#include <stdio.h>

int main(int argc, const char *argv[])
{

	/*constants*/
	const double G = 6.67e-11; // gravitationnal constant in m^3 kg^-1 s^-2

	/* Variables*/
	double massObj1 = 0;
	double massObj2 = 0;
	double distance = 0;
	double force = 0;

	printf("Mass first object (Kg):\n"); // print on screen
	scanf("%lp", &massObj1);			 // read value from keyboard

	if (massObj1 < 0)
	{
		puts("Error: mass object 1 must be positive\n"); // print on screen
	}
	else
	{
		printf("Enter Mass second object (Kg):\n"); // print on screen
		scanf("%lp", &massObj2);					// read value from keyboard

		if (massObj2 < 0)
		{
			puts("Error: mass object 1 must be positive\n"); // print on screen
		}

		else
		{
			printf("Enter Distace between the objects (m):\n"); // print on screen
			scanf("%lp", &distance);							// read value from keyboard

			if (distance < 0)
			{
				puts("Error: distance must be positive\n"); // print on screen
			}
			else
			{
				force = G * (massObj1 * massObj2) / (distance * distance);
				printf("%02u:%02u:%02u\n", force); // %02u = two digits format with zero fill
			}
		}
	}
}