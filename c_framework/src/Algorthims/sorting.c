#include "utilites.h"

void bubbleSort(int *arr, int length) {
	int min_loc;
	int i, j;
	for (i = 0; i < length - 1; i++) {
		min_loc = i;
		for (j = i + 1; j <= length - 1; j++) {
			if (arr[j] <= arr[min_loc]) {
				makeSwap(&arr[min_loc], &arr[j]);
			}

		}

	}
}
void inserationsort(int *arr, int length) {
	int i, j = 1, key;
	while (j <= length) {
		key = arr[j];
		i = j - 1;
		while (i >= 0 && key < arr[i]) {
			arr[i + 1] = arr[i];
			i = i - 1;

		}
		arr[i + 1] = key;
		j++;

	}

}
void mergesubarrays(int *arr, int left, int middle, int right) {

	int l = 0, r = 0, j = 0, k = left;
	int l_length = middle - left + 1;
	int r_length = right - middle;
	int leftarr[l_length];
	int rightarr[r_length];

	/* initialize left and right arrays */
	for (j = 0; j < l_length; j++) {
		leftarr[j] = arr[left + j];
	}

	for (j = 0; j < r_length; j++) {
		rightarr[j] = arr[middle + 1 + j];
	}

	while (l < l_length && r < r_length) {

		if (leftarr[l] < rightarr[r]) {
			arr[k] = leftarr[l];
			l++;
			k++;
		} else {
			arr[k] = rightarr[r];
			r++;
			k++;
		}

	}

	while (l < l_length) {
		arr[k] = leftarr[l];
		k++;
		l++;
	}
	while (r < r_length) {
		arr[k] = rightarr[r];
		r++;
		k++;
	}

}

void mergesort(int *arr, int left, int right){
	int middle;
	/* divide array while array can be divided */
	if (left < right) {
		middle = (left + right) / 2;
		/* dividing forward */
		mergesort(arr, left, middle);
		mergesort(arr, middle + 1, right);
		/*sorting backward */
		mergesubarrays(arr, left, middle, right);
	}
}
void quickSort(int arr[], int right, int left) {
	int pivot = arr[left];
	int i = right;
	int j = left;

	while (i <= j) {

		while (arr[i] < pivot) {
			i = i + 1;
		}
		while (arr[j] > pivot) {
			j = j - 1;
		}
		if (i <= j) {
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i = i + 1;
			j = j - 1;
		}
	}

	if (left > i) {
		quickSort(arr, i, left);
	}
	if (right < j) {
		quickSort(arr, right, j);
	}
}
void selectionSort(int *arr, int length) {
	int min_loc;
	int i, j;
	for (i = 0; i < length - 1; i++) {
		min_loc = i;
		for (j = i + 1; j <= length - 1; j++) {
			if (arr[j] <= arr[min_loc]) {
				min_loc = j;
			}
		}
		makeSwap(&arr[min_loc], &arr[i]);
	}
}
