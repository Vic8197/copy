#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adding two positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 - Success
 */

int main(int argc, char *argv)
{
	int i, j, add = 0;
	for (i = o; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}

