#include <stdio.h>
int z;
void f(int x, int y)
{
	z = y;
	x += y + z;
	z = x * 2;

}
int main(void)
{
	int y = 3;
	f(z, y);
	printf("%d\n", y + z);

}
