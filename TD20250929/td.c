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

	int s = 0; // signed int
	unsigned int hours = 0;
	unsigned int minutes = 0;
	unsigned int seconds = 0;

	printf("Number of seconds:"); // print on screen
	scanf("%d", &s);			  // read value from keyboard

	if (s < 0)
	{
		puts("Error"); // print on screen
	}
	else if (s >= 86400)
	{
		puts("Overflow"); // print on screen and go to new line like printif("Error\n");
	}
	else
	{
		hours = s / 3600;
		minutes = s / 60 - hours * 60;
		seconds = s - minutes * 60 - hours * 3600;

		printf("%02u:%02u:%02u\n", hours, minutes, seconds); // %02u = two digits format with zero fill
		
	}
}