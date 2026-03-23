#include"util.h"

int main() {
	srand(time(NULL));
	int array[DEFAULT_SIZE];
	int size;

	cout << "Input size: ";
	cin >> size;

	init_rnd(array, size,0,100);

	insertion_Sort(array, size);

	print("\n\nAfter sorting: ");
	print(convert(array, size));


	return 0;
}