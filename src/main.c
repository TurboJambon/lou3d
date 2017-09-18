#include <stdlib.h>
#include <stdio.h>

char map[6][6] =
{
	{1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 1},
	{1, 0, 1, 0, 0, 1},
	{1, 0, 0, 0, 1, 1},
	{1, 0, 0, 1, 1, 1},
	{1, 1, 1, 1, 1, 1}
};

int main(int argc, char const *argv[])
{
	int i = 0;
	int j;

	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			printf("%hhd", map[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}