#include <stdio.h>
int main(void)
{
	int num = 0;
	int i = 1;
	printf("1~9사이의 정수를 입력하시오 : \n");
	scanf_s("%d", &num);
	while (i < 10)
	{
		while ((num < 1) || (num > 9))
		{
			printf("잘못입력하셨습니다.1~9사이의 정수를 입력하세요");
			scanf_s("%d", &num);

		}
		printf("%d x %d=%d\n", num, i, num * i);
		i++;
	}
	return 0;
}
