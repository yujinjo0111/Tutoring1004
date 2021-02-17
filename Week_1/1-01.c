#include <stdio.h>
int main(void)
{
	int num1, total = 0, i = 0;
	printf("0보다 큰 정수값 N을 입력하세요:\n");
	scanf_s("%d", &num1);
	while (i <= num1)
	{
		total += i;
		i++;
	}

	printf("1부터 N까지의 합 :%d", total);
	return 0;



}
