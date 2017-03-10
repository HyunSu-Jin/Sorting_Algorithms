void swap(int& a, int& b) {
	int temp = b;
	b = a;
	a = temp;
}

void bubbleSort(int* arr, int length) {
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}