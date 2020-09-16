#include<stdio.h>

/*
while 문
- while ( 조건식 ) {
	  조건식이 참이면 실행
  }

  > 반복문의 실행 조건식만 알고 있을때 사용
  > while 문의 조건식에 아무것도 작성하지 않으면 Error

do while문
- do {
	 실행 코드
  } while ( 조건식 );

  > 반복문의 코드를 먼저 실행하고 조건식을 확인하기 때문에,
	반복문의 코드를 무조건 한번은 실행한다
*/

int main() {

	int i = 0;

	while (i < 5) {
		printf("%d\n", i);
		++i;

	}
	puts("=======================");

	int no = 1;

	while (1) {
		printf("%d\n", no);
		if (no == 20)
			break;
		++no;
	}

	puts("=======================");

	int value;

	while (1) {
		printf("숫자 입력 > ");
		scanf_s("%d", &value);
		if (value >= 0)
			break;
	}
	printf("입력 값 : %d\n", value);

	puts("=======================");

	int data;
	char run = 'y';
	int sum = 0;

	while (run != 's') {
		printf("숫자 입력 > "); scanf_s("%d", &data);
		sum += data;
		if (data == 0) //변수를 사용해도됨
			run = 's';
	}
	printf("합 : %d\n", sum);

	puts("=======================");

	int tot = 0;
	int val;

	do {
		printf("숫자 입력 ( 종료 : 0 ) > ");
		scanf_s("%d", &val);
		tot += val;
	} while (val != 0);
	printf("합 : %d\n", tot);

}