#include<stdio.h>

/*
   배열안에서 가장 큰값 찾기
*/

int main() {

	int el[] = { 1, 34, 2, 52, 13, 108, 222, 102, 909, 1001 };

	int elSize = sizeof(el) / sizeof(int);

	for (int i = 0; i < elSize; i++) {
		printf("%d ", el[i]);
	}
	puts("");

	int max = el[0];
	for (int i = 1; i < elSize; i++) {
		if (el[i] > max)
			max = el[i];

	}
	printf("큰값 : %d\n", max);

}