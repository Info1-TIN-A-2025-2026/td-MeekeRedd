#include <stdio.h>
#include <stdlib.h>

#define HEIGHT 16
#define WIDTH 16
#define NUM_GRAY 32


void display_matrix(unsigned char matrix[HEIGHT][WIDTH])
{
	for (unsigned int row = 0; row <HEIGHT; row++)
	{
		for (unsigned int col = 0; col < WIDTH; col++)
		{
			printf("%4d", matrix[row][col]);
		}
		printf("\n");
	}
}

void fill_matrix(unsigned char m[HEIGHT][WIDTH], int minValue, int maxValue)
{
	
	for (unsigned int col = 0; col < HEIGHT; col++)
	{
		for (unsigned int row = 0; row < WIDTH; row++)
		{
			float random = (float)rand() / (float)RAND_MAX;
			random = minValue + random * (maxValue - minValue);
			m[row][col] = random;
		}

	}

}

void compute_histo(unsigned char m[HEIGHT][WIDTH], unsigned long his[NUM_GRAY])
{
	for (unsigned int col = 0; col < HEIGHT; col++)
	{
		for (unsigned int row = 0; row < WIDTH; row++)
		{

			his[m[row][col]]++;

		}

	}
}

void display_histo(unsigned long histo[NUM_GRAY])
{
	for (unsigned long gray = 0; gray < NUM_GRAY; gray++)
	{
		printf("%4ld", histo[gray]);
	}
	puts("");
}

void dilation(unsigned char f[HEIGHT][WIDTH],unsigned char g[HEIGHT][WIDTH])
{
	for (unsigned long row = 1; row <HEIGHT -1; row++)
	{
		for (unsigned int col = 1; col < WIDTH-1; col++)
		{
			if (f[row][col] > 0)
			{
				for (long delta_row = -1; delta_row < HEIGHT; col++)
				{
					for (unsigned int row = 0; row < WIDTH; row++)
					{

						
					}
				}
			}
		}
		printf("\n");
	}
}

int main(int argc, const char *argv[])
{
	unsigned char f[HEIGHT][WIDTH] = {0};
	for (unsigned long row = 4; row < 12; row++)
	{
		
	}
	
}