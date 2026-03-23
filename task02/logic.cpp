#include"logic.h"
void selection_sort(int arr[], int n)
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

// 1 3 5 3 7 3 8

// O(N)
string find_double_value(int arr[], int n) {
	string same = "";

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[i+1]) {
			same += to_string(arr[i]) + " ";
	
		}
	}
	return same;
}