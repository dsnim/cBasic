#include<stdio.h>

/*
   특정 범위의 데이터 수
*/

int main() {

	int val[] = { 5, 2, 9, 4, 3, 12, 17 };

	int valSize = sizeof(val) / sizeof(int);

	int count = 0;
	int startRange = 5;
	int endRange = 15;
	for (int i = 0; i < valSize; i++) {
		printf("%d ", val[i]);
	}
	puts("");

	for (int i = 0; i < valSize; i++) {
		if (val[i] >= startRange && val[i] <= endRange)
			++count;
	}
	printf("%d ~ %d 사이의 수 : %d\n", startRange, endRange, count);

}