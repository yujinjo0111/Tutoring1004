#include <stdio.h>
#include<stdbool.h>

bool strcmp(char* arr1, char* arr2) {
	int id1 = *arr1;
	int id2 = *arr2;
	if (id1 == id2)
		return -1;
	else
		return 0;
}
void main() {
	char arr1[] = "hello";
	char* arr[] = { "hello","world" };

	if (strcmp(arr1, arr[0]))printf("arr1==arr[0]\n");
	else printf("arr1!=arr[0]\n");
	if (strcmp(arr1, arr[1]))printf("arr1==arr[1]\n");
	else printf("arr1 !=arr[1]\n");
}
