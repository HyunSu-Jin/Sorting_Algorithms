void selectionSort(int* arr, int length) {
	int min;
	int minIdx;
	for (int i = 0; i < length; i++) {
		min = arr[i];
		minIdx = i;
		for (int j = i + 1; j < length; j++) {
			if (min > arr[j]) {
				min = arr[j];
				minIdx = j;
			}
		}
		arr[minIdx] = arr[i];
		arr[i] = min;
	}
}