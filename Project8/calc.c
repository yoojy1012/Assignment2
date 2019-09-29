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

	a = atoi(argv[1]);
	
	for (i = 1; argv[i]; i++)
		while (i <= argv[i])
		{
			b = argv[2*i + 1];
			opr = argv[2*i - 1];

			switch (opr)
			{
			case '+':rst = a + b;
				break;

			case '-':rst = a - b;
				break;
			}

			rst = a;
		}
	

}