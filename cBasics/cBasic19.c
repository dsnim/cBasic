#include <stdio.h>

/*
매크로 ( macro )
- 프로그램에서 자수 사용하는 상수, 간단한 공식에 이름을 붙여서 사용하는 것
- 매크로는 코드수정이 매우 용이하다
*/

#define PI 3.14192
#define ARRAY_SIZE 10
#define SQUARE(n) n*n //매크로 함수
#define CIRCLE_AREA(r) SQUARE(r) * PI

int main() {

	printf("반지름 5인 원의 넓이 : %f\n", CIRCLE_AREA(5));

	printf("3의 제곱 : %d\n", SQUARE(3));

	//int size = 3;
	//int arr[size];

	int arr[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%d\n", arr[i]);
	}
	puts("");

	printf("원주율 : %.5f\n", PI);

}