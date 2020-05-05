#include <stdio.h>
void quickSort(int* array, int start, int end) {
	if(start >= end) {
		return;
	}
	int st = start, ed = end;
	int ref = array[start];
	while(start < end) {
		while(end > start && array[end] >= ref) {
			end--;
		}
		array[start] = array[end];
		while(start < end && array[start] <= ref) {
			start++;
		}
		array[end] = array[start];
	}
	array[start] = ref;
	quickSort(array, st, start - 1);
	quickSort(array, start + 1, ed);
}

void fastSort(int* array, int length) {
	quickSort(array, 0, length - 1);
}
