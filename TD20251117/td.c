#include <stdio.h>

void proc(void); //prototype for proc
void f1(const int a);

int main(int argc, const char *argv[])
{
	proc();
	f1(2);
	return 0;
}

void proc(void)
{
	printf("hello");
}

void f1(const int a)
{
	printf("%d\n", a * 3);
}