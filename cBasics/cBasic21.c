#include <stdio.h>

/*
지역변수
- 함수({})안에서 선언된 변수
  > 해당 지역이 실행 중일 때에만 사용이 가능
*/

int main() {

	int a = 10;
	printf("main a : %d, 주소 : %p\n", a, &a);

	for (int i = 0; i < 2; i++) {
		int a = 111;
		printf("for a : %d, 주소 : %p\n", a, &a);
		a += 100;
	}

	printf("a : %d, 주소 : %p\n", a, &a);

}