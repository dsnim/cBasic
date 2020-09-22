#include<stdio.h>

/*
포인터 연산
- 주소를 연산하면 주소의 자료형 크기단위를 기준으로 처리
*/

int main() {

	int d1;
	int* pd1 = &d1;
	printf("pd1         :%p\n", pd1);
	printf("pd1 + 1     :%p\n", pd1 + 1);
	printf("pd1 + 2     :%p\n", pd1 + 2);
	puts("");

	double d2;
	double* pd2 = &d2;
	printf("pd2         :%p\n", pd2);
	printf("pd2 + 1     :%p\n", pd2 + 1);
	printf("pd2 + 2     :%p\n", pd2 + 2);
	puts("");

	char d3;
	char* pd3 = &d3;
	printf("pd3         :%p\n", pd3);
	printf("pd3 + 1     :%p\n", pd3 + 1);
	printf("pd3 + 2     :%p\n", pd3 + 2);

}