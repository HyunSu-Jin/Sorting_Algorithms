void insertionSort(int *arr, int length) {
	int value;
	for (int i = 1; i < length; i++) {
		value = arr[i];
		for (int j = i; j > 0; j--) {
			if (arr[j - 1] > value) {
				arr[j] = arr[j - 1];
				if (j == 1) {
					arr[j - 1] = value;
				}
			}
			else {
				arr[j] = value;
				break;
			}
		}
	}
}