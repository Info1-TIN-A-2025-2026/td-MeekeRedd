#include <stdio.h>

int main(int argc, const char *argv[])
{
	unsigned int state = 0;
	printf("Enter state (ON=1, OFF=2, BLINK=4): ");
	scanf("%u", &state);

	switch (state)
	{
	case 1:
		printf("State = 0N\n");
		break;
	case 2:
		printf("State = 0FF\n");
		break;
	case 4:
		printf("State = BLINK\n");
		break;

	default:
		printf("State = TEST RUNNING\n");
		break;
	}

	return 0;
}