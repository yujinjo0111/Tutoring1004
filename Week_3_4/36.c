#include <stdio.h>
void main()
{
	int arr[3] = { 1,2,3 };
	int* ptr = &arr[0];
	
	int i;
	for (i = 0; i < 3; i++)
		printf("%d",ptr[i]);
	
}
