#include<stdio.h>

/*
for 문
- for( 초기식 ; 조건식 ; 증감식 ){
		실행 코드
  }


  > 초기식 : for 문의 실행 횟수를 확인하는 변수의 선언과 초기값 설정
			for문 실행과 동시에 딱 한번만 실행됨
	조건식 : for 문의 실행 여부 확인
	증감식 : 실행 획수 변경

  > 반복의 횟수가 지정되어 있을때 주로 사용
*/

int main() {

	//   1          2      4
	for (int i = 0; i < 5; i++) {

		printf("%d\n", i);

	}

	// 1(한번 실행) -> 2(참) -> 3 -> 4
	//             -> 2(참) -> 3 -> 4
	//             . . . . . . .
	//             -> 2(거짓) -> 종료

	puts("=====================");

	//1 ~ n 까지의 합
	int last = 10;
	int total = 0;
	for (int i = 1; i <= last; i++) {
		total += i;
	}
	printf("1 ~ %d 까지의 합 : %d\n", last, total);

	puts("====================");
	
	//배수 확인
	int cnt = 0;
	for (int i = 1; i < 31; i++) {
		if (i % 3 == 0) {
			printf("%d\n", i);
			++cnt;
		}
	}
	printf("갯수 : %d\n", cnt);
	puts("");

	for (int m = 3; m < 31; m += 3) {
		printf("%d\n", m);
	}
	puts("");

	puts("====================");

	//중첩 for
	for (int out = 1; out <= 3; out++) {
		printf("%d 회전\n", out);

		for (int in = 1; in <= 5; in++) {
			printf("%d", in);
		}
		puts("");
	}

	puts("====================");

	//out          in
	//1			   1 ~ 5
	//2			   1 ~ 5
	//3            1 ~ 5


	for (int dan = 2; dan < 10; dan++) {

		for (int i = 1; i < 10; i++) {
			printf("%d X %d = %d\n", dan, i, dan * i);
		}
		puts("");

	}
	puts("");

}