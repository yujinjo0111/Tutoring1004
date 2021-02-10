#include <stdio.h>
void bubleSort(int* arr, int n) {
	int m, k, t;
	for (m = 0; m < n - 1; m++) {
		for (k = 0;k< n - m; k++) {
			if (arr[k-1] > arr[k]){
				t = arr[k - 1];
				arr[k - 1] = arr[k];
				arr[k] = t;

				}
		}
	}
}
int main() {
	int arr[10] = { 4,3,6,7,1,2,9,8,5 };
	bubleSort(arr, 10);
	for (int i = 0; i < 10; i++)
		printf("%d", arr[i]);
}
