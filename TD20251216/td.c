#include <stdio.h>
#include <stdlib.h>

#define H 4
#define W 4
#define NUM_GRAY 256

void display_matrix(unsigned char m[H][W]);
void fill_matrix(unsigned char m[H][W], int minValue, int maxValue);
void compute_histo(unsigned char m[H][W], unsigned long his[NUM_GRAY]);
void display_histo(unsigned long histo[NUM_GRAY]);

int main(int argc, const char *argv[])
{
	unsigned char f[H][W] = {0};
	unsigned long h[NUM_GRAY] = {0};

	srand(1000);
	fill_matrix(f, 0, 255);
	display_matrix(f);
	compute_histo(f, h);
	display_histo(h);
}

void display_matrix(unsigned char m[H][W])
{
	for (unsigned int i = 0; i < H; i++)
	{
		for (unsigned int j = 0; j < W; j++)
		{
			printf("%4d", m[j][i]);
		}
		printf("\n");
	}
}

void fill_matrix(unsigned char m[H][W], int minValue, int maxValue)
{
	
	for (unsigned int col = 0; col < H; col++)
	{
		for (unsigned int row = 0; row < W; row++)
		{
			float random = (float)rand() / (float)RAND_MAX;
			random = minValue + random * (maxValue - minValue);
			m[row][col] = random;
		}

	}

}

void compute_histo(unsigned char m[H][W], unsigned long his[NUM_GRAY])
{
	for (unsigned int col = 0; col < H; col++)
	{
		for (unsigned int row = 0; row < W; row++)
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
