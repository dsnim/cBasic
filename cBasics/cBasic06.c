#include <stdio.h>

/*
중첩 if

if ( 조건식_a ) {
조건식_a가 참이면 실행
if ( 조건식_b ) {
조건식_a, 조건식_b 가 둘다 참이면 실행
}
else {
조건식_a 가 참이면 실행
}
}
if 문안에서 다시 if 문을 선언 할 수 있습니다.
첫번째 조건식에서 나온 결과를 세분화 or 재분류 할 때 사용
*/

int main() {

	int value = -7;
	printf("value : %d\n", value);
	puts("");

	if (value >= 0) {

		puts("plus");
		if (value % 2 == 1) {
			puts("홀수");
		}
		else {
			puts("짝수");
		}

	}
	else {

		puts("minus");
		int cvalue = value * -1; //-값 사용 x
		if (value % 2 == 1) {
			puts("짝수");
		}
		else {
			puts("홀수");
		}

	}

}
