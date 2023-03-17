#include <stdio.h>

/**
 * main - entery point
 *
 * Return: 0 Success
 */
int main(void)
{
	int i;
	int j;
	int n1;
	int n2;
	int n3;
	int n4;

	for (i = 0; i < 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if ((i != j) && (i < j))
			{
				n1 = i / 10;
				n2 = i % 10;
				n3 = j / 10;
				n4 = j % 10;
				putchar(n1 + '0');
				putchar(n2 + '0');
				putchar(' ');
				putchar(n3 + '0');
				putchar(n4 + '0');
				if ((i != 98) || (j != 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

