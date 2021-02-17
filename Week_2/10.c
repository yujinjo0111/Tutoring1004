#include <stdio.h>
int main(void)
{
	int num = 0;
	int i = 0;
	for (int i = 32; i <= 126; i++)
	{
		printf("%d  -  %c     ", i,i);
	num++;
	if (num % 5 == 0)
		printf("\n");
}



	
}
