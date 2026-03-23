#include"util.h"

int main() {
	srand(time(NULL));
	int array[DEFAULT_SIZE];
	int size;

	cout << "Input size: ";
	cin >> size;

	init_rnd(array, size, 0, 10);
	print(convert(array, size));

	selection_sort(array, size);

	print("\n same numbers: ");
	print(find_double_value(array, size));


	return 0;
}