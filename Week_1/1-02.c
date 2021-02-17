#include <stdio.h>
int main(void)
{
	int supc = -50;
	double wapc = 0;
	do
	{
		wapc = (supc + 40) * 1.8 - 40;
		printf("섭씨%d도는 화씨 %.3lf도 입니다\n", supc, wapc);
		supc = supc + 5;
	} while (supc <= 50);

	return 0;


}
