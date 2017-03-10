void merge(int* arr, int left, int mid, int right) {
	int length = right + 1;
	int * newArr = new int[length];
	int leftIdx = left; // left~ mid
	int rightIdx = mid + 1; // mid+1 ~ right
	int newIdx = left;
	cout << "[" << left << "," << right << "]" << "merge call" << endl;
	for (int i = left; i <= right; i++) {
		if (leftIdx > mid) {
			newArr[newIdx] = arr[rightIdx];
			rightIdx++;
			newIdx++;
			continue;
		}
		if (rightIdx > right) {
			newArr[newIdx] = arr[leftIdx];
			leftIdx++;
			newIdx++;
			continue;
		}

		if (arr[leftIdx] < arr[rightIdx]) {
			newArr[newIdx] = arr[leftIdx];
			leftIdx++;
		}
		else {
			newArr[newIdx] = arr[rightIdx];
			rightIdx++;
		}
		newIdx++;
	}
	for (int i = left; i <= right; i++) {
		cout << arr[i] << ":" << newArr[i] << endl;
		arr[i] = newArr[i];
	}
	delete newArr;
}
void mergeSort(int* arr, int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}