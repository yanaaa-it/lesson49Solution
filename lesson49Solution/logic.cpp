#include"logic.h"

void insertion_Sort(int arr[], int n)
{
	int key;
	for (int i = 0; i < n; i++) {
		key = arr[i];
		int  j = i - 1;

		while (arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
void Selection_Sort(int arr[], int n)
{
	for (int i = 0; i < n; ++i) {

		int min = i;
		for (int j = i + 1; j < n; ++j) {
			if (arr[j] > arr[min]) {
				min = j;
			}
		}

		int t = arr[i];
		arr[i] = arr[min];
		arr[min] = t;
	}

}