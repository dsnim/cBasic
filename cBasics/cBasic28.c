#include<stdio.h>

/*
포인터 크기
- 32bit : 4byte ( visualstudio 기본값 )
- 64bit : 8byte
*/

int main() {

	int n1;
	int* pn1 = &n1;
	printf("n1     크기 : %d\n", sizeof(n1));
	printf("pn1    크기 : %d\n", sizeof(pn1));
	puts("");

	double n2;
	double* pn2 = &n2;
	printf("n2     크기 : %d\n", sizeof(n2));
	printf("pn2    크기 : %d\n", sizeof(pn2));
	puts("");

	char n3;
	char* pn3 = &n3;
	printf("n3     크기 : %d\n", sizeof(n3));
	printf("pn3    크기 : %d\n", sizeof(pn3));
	puts("");


}