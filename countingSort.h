void countingSort(int* arr1, int* arr2, int length, int range) {
	int *countArr = new int[range + 1];
	for (int i = 0; i < range + 1; i++) {
		countArr[i] = 0;
	}
	for (int i = 0; i < length; i++) {
		countArr[arr1[i]] += 1;
	}
	for (int i = 1; i < range + 1; i++) {
		countArr[i] += countArr[i - 1];
	}
	for (int i = length - 1; i >= 0; i--) {
		arr2[countArr[arr1[i]] - 1] = arr1[i];
		countArr[arr1[i]] -= 1;
	}
	delete countArr;
}