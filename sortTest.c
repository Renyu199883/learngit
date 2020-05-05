#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int __LENGTH__ = 10000;

void printArray(int* array, int length);
void bubbleSort(int* array, int length);
void fastSort(int* array, int length);
void selectSort(int* array, int length);

int main(int argc, char** argv) {
	if(argc > 1) {
		__LENGTH__ = atoi(argv[1]);
	}
	printf("%d个数：\n", __LENGTH__);
	int array[__LENGTH__];
	srand((unsigned int)time(NULL));
	for(int i = 0; i < __LENGTH__; i++) {
		array[i] = rand();
	}
	//printf("原数组：\n");
	//printArray(array, __LENGTH__);

	int* sort = (int*)malloc(sizeof(int) * __LENGTH__);
	long _t;

	memcpy(sort, array, sizeof(int) * __LENGTH__);
	_t = (long)clock();
	bubbleSort(sort, __LENGTH__);
	_t = (long)clock() - _t;
	printf("冒泡排序：%ld.%06ld秒\n", _t / CLOCKS_PER_SEC, _t % CLOCKS_PER_SEC);
	//printArray(sort, __LENGTH__);

	memcpy(sort, array, sizeof(int) * __LENGTH__);
	_t = (long)clock();
	fastSort(sort, __LENGTH__);
	_t = (long)clock() - _t;
	printf("快速排序：%ld.%06ld秒\n", _t / CLOCKS_PER_SEC, _t % CLOCKS_PER_SEC);
	//printArray(sort, __LENGTH__);

	memcpy(sort, array, sizeof(int) * __LENGTH__);
	_t = (long)clock();
	selectSort(sort, __LENGTH__);
	_t = (long)clock() - _t;
	printf("选择排序：%ld.%06ld秒\n", _t / CLOCKS_PER_SEC, _t % CLOCKS_PER_SEC);
	//printArray(sort, __LENGTH__);

	free(sort);
	return 0;
}

void printArray(int* array, int length) {
	for(int i = 0; i < length; i++) {
		printf("%d ", array[i]);
		if(i % 30 == 29) {
			printf("\n");
		}
	}
	printf("\n");
}
