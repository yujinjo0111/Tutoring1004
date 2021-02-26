#include <stdio.h>
int main()
{
	int n, i, j;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j > n - i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
