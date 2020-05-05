#include <stdio.h>
void selectSort(int* array, int length) {
	int min;
	for(int i = 0; i < length - 1; i++) {
		min = i;
		for(int j = i + 1; j < length; j++) {
			if(array[j] < array[min]) {
				min = j;
			}
		}
		if(i != min) {
			array[i] = array[i] ^ array[min];
			array[min] = array[i] ^ array[min];
			array[i] = array[i] ^ array[min];
		}
	}
}
