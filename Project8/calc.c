#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
	int a, b, rst;
	int i;
	char opr;

	if (argc > 100)
	{
		printf("Too many arguments!\n");
		return 0;
	}
	else if (argc <= 1)
	{
		printf("There are no arguments!\n");
		return 0;
	}

	a = atoi(argv[1]);
	rst = a;
	if (argc == 2)
	{
		a = atoi(argv[1]);
	}
	else if (argc % 2 != 0)
	{
		printf("Invalid fomula!\n");
		exit(0);
	}
	else
	{
		for (i = 2; 2 * i <= argc; i++)
		{
			b = atoi(argv[2 * i - 1]);
			opr = argv[2 * i - 2];

			switch (opr)
			{
			case '+':
				rst = rst + b;
				break;
			case '-':
				rst = rst - b;
				break;
			default:
				printf("Invalid operators!");
				exit(0);
			}
		}
	}
	printf("%d", rst);

	return 0;
}