void swap(int* arr, int idx1, int idx2) {
	int temp = arr[idx2];
	arr[idx2] = arr[idx1];
	arr[idx1] = temp;
}

int partition(int* arr, int left, int right) {
	int pivotIdx = left;
	int pivot = arr[pivotIdx];
	int low = pivotIdx + 1;
	int high = right;
	while (low <= high) {
		while (arr[low] <= pivot && low <= right) {
			low++;
		}
		while (arr[high] >= pivot && high >= (left + 1)) {
			high--;
		}
		if (low <= high) {
			swap(arr, low, high);
		}
	}
	swap(arr, pivotIdx, high);
	return high;
}

void quickSort(int* arr, int left, int right) {
	if (left <= right) {
		int pivot = partition(arr, left, right);
		quickSort(arr, left, pivot - 1);
		quickSort(arr, pivot + 1, right);
	}
}
