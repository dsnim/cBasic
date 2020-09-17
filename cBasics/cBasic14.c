#include<stdio.h>

/*
   정수 배열의 전체 데이터의 합
*/

int main() {

	int data[] = { 1, 5, 2, 8, 4 };

	int dataSize = sizeof(data) / sizeof(int);

	int total = 0;
	for (int i = 0; i < dataSize; i++) {
		printf("%d ", data[i]);
		total += data[i];
	}
	puts("");
	printf("데이터의 합 : %d\n", total);

}