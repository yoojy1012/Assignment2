#include <stdio.h>

int main(int argc, char* argv[])
{
	int a, b, rst;
	int i = 0;
	char opr;

	if (argc > 100)
	{
		printf("Too many arguments!");
		return 0;
	}
	else if (argc < 1)
	{
		printf("There are no arguments!");
		return 0;
	}

}