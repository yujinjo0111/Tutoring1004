#include <stdio.h>
int main(void)
{
	int num, i;
	for (num = 1; num < 10; num++)
	{
		for (i = 0; i < 10; i++)
			printf("%d x %d = %d\n", num, i, num * i);
		printf("\n");

	}
	return 0;
}
