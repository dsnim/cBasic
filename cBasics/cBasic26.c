#include <stdio.h>

int main() {

	/*
	포인터
	- 메모리의 주소값을 가지는 변수입니다
	  > 일반적인 데이터는 가질 수 없고, 오직 상수 or 변수의 주소값을 가지는 변수입니다.

	포인터 변수 선언( 생성 )
	- 자료형 * 포인터변수명

	*/

	int a = 10;
	int* pa = &a; //pointer 주소값 설정
	printf("a 주소 : %p == pa 값 : %p\n", &a, pa);
	printf("a 값 : %d == *pa : %d\n", a, *pa);

	*pa = 111;
	printf("a 값 : %d == *pa : %d\n", a, *pa);
	puts("");

	double b = 1.1;
	double* pb = &b;
	printf("b 주소 : %p == *pb : %p\n", &b, pb);
	printf("b 값 : %.1f == *pb : %.1f\n", b, *pb);
	puts("");

	char ch = 'a';
	char* pch = &ch;
	printf("ch 주소 : %p == pch 값 : %p\n", &ch, pch);
	printf("ch 값 : %c == pch : %c\n", ch, *pch);
	puts("");

}