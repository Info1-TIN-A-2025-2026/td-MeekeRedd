#include <stdio.h>

int main(int argc, const char *argv[])
{

	long volume = 42;	 // m3
	long pressione = -4; // bar

	printf("volume =[%ld]\n", volume);	// base dec
	printf("volume =[%7ld]\n", volume); // 7 character and right justified
	printf("volume =[%7ld]\n", volume); // 7 character and left justified

	printf("volume =[%+ld]\n", volume);	  // base dec with added sign of variable
	printf("volume =[%+7ld]\n", volume);  // 7 character and right justified added sign of variable
	printf("volume =[%+-7ld]\n", volume); // 7 character and left justified added sign of variable

	printf("pressure =[%ld]\n", pressione); // base dec

	double pi = 3.14159265376576527365;
	printf("pi =[%lf]\n", pi);	  // 6 diits after decimal point
	printf("pi =[%.2lf]\n", pi);  // 2 diits after decimal point
	printf("pi =[%+.2lf]\n", pi); // 6 diits after decimal point

	double absolute_zero = -459.67;			  // F
	printf("zero =[%.1lf]\n", absolute_zero); // 6 diits after decimal point

	printf("[%+10.2lf]\n", pi);
	printf("[%+10.2lf]\n", absolute_zero);

	double light_speed = 299792458.0; // m/s

	printf("[%+10.2lf]\n", light_speed);

	int num_digits = 3; // %.3lf

	printf("[%.3lf]\n", pi);
	printf("[%.*lf]\n", num_digits, pi); //decimal point controlled by variable

	int width = 8;
	printf("[%*.*lf]\n",width, num_digits, pi); //decimal point and width controlled by variable

	return 0;
}