#include <stdio.h>

/*
	배열의 크기 계산
*/


int main() {

	int value[50];

	printf("value 값 : %p\n", value);
	//배열명이 가지고 있는 값은 해당 배열의 시작주소 값 이다

	printf("value 크기 : %d\n", sizeof(value));

	//배열 요소의 수 = 배열 전체 크기 / 배열 한개 요소 크기
	int valuseSize = sizeof(value) / sizeof(int); //sizeof(value[0]);
	printf("value 요소의 수 : %d\n", valuseSize);

	//for (int i = 0;i < 5;i++) {
	for (int i = 0; i < valuseSize; i++) {
		value[i] = i;
	}

	//for (int i = 0; i < 5; i++) {
	for (int i = 0; i < valuseSize; i++) {
		printf("%d ", value[i]);
	}
	puts("");

}