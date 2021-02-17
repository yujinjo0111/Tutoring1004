#include <stdio.h>
int main(void)
{
	int start, end,j,i=0;
	printf("정수 2개를 입력하세요 :\n");
	scanf_s("%d%d", &start, &end);
	for (i = start; start <= end; start++)
	{
		for (j = 1; j <= start; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;
}
