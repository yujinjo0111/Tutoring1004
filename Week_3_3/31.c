#include <stdio.h>

struct person
{
	int number;
	char cell;
 double eye;

};
int main()
{
	struct person arr[5];
	int i;
	for (i = 0; i < 5; i++)
	{	printf("학번 : ");
	scanf_s("%d", &arr[i].number);
	printf("혈액형 :");
	scanf_s("%s", arr[i].cell);
	printf("시력 : ");
	scnaf_s("%lf", &arr[i].eye);
    }
	for (i = 0; i < 5; i++)
	{
		printf("학번 %d, 혈액형: %s,시력:%lf", arr[i].number, arr[i].cell, arr[i].eye);

	}
	return 0;


}



////오류남...왜?
