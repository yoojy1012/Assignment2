#include <stdio.h>

int main(int argc, char* argv[])
{
	int a, b, rst;
	int i;
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

	for (i = 0; argv[i]; i++)
		a = argv[i];
		b=argv[i+2]

	

}