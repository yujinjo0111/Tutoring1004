#include <stdio.h>
int main(void)
{
	int i = 0, j = 0;
	while (i < 6)
	{
		while (j < i)
		{
			printf("*");
			j++;

		}
		j = 0;
		printf("\n");
		i++;

	}
	return 0;
}
