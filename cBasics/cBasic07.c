#include <stdio.h>

/*
if - else if 문

if ( 조건식_a ) {
조건식_a 가 참이면 실행
}
else if ( 조건식_b ) {
조건식_a 거짓, 조건식_b 가 참이면 실행
}
......
else {
앞에 조건식이 모두 거짓이면 실행 ( 사용 o, x )
}

여러개의 구간 중에 어디에 속하는지를 찾을때 사용
*/

int main() {

	int data = 25;
	printf("data : %d\n", data);
	puts("");

	puts("- if문 여러개 -");
	if (data > 20) {
		puts("20 보다 큰수");
	}
	if (data > 10) {
		puts("10 보다 큰수");
	}
	if (data > 0) {
		puts("0 보다 큰수");
	}
	puts("");

	puts("- if ~ else if -");
	if (data > 20) {
		puts("20 보다 큰수");
	}
	else if (data > 10) {
		puts("10 보다 큰수");
	}
	else if (data > 0) {
		puts("0 보다 큰수");
	}
	puts("");

	puts("===============================");

	int value = 10;
	printf("value : %d\n", value);
	puts("");

	if (value >= 1 && value <= 10) {
		puts("1 ~ 10");
	}
	if (value >= 11 && value <= 20) {
		puts("11 ~ 20");
	}
	if (value >= 21 && value <= 30) {
		puts("21 ~ 30");
	}
	puts("");

	if (value <= 10) {
		puts("1 ~ 10");
	}
	else if (value <= 20) {
		puts("11 ~ 20");
	}
	else if (value <= 30) {
		puts("21 ~30");
	}
	puts("");

	puts("===============================");

	int no = 35;
	printf("no : %d\n", no);
	puts("");

	if (no % 3 == 0 && no % 5 == 0) {
		puts("3 and 5의 배수");
	}
	else if (no % 5 == 0) {
		puts("5의 배수");
	}
	else if (no % 3 == 0) {
		puts("3의 배수");
	}
	else {
		puts("몰라");
	}

}