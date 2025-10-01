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
	double ddistance = 0;

	printf("Mass first object (Kg):"); // print on screen
	scanf("%lp", &massObj1);			  // read value from keyboard

	if (massObj1 < 0)
	{
		puts("Error: mass object 1 must be positive"); // print on screen
	}
	else if (massObj1 >= 86400)
	{
		puts("Overflow"); // print on screen and go to new line like printif("Error\n");
	}
	else
	{

		printf("%02u:%02u:%02u\n", massObj1); // %02u = two digits format with zero fill
		
	}
}