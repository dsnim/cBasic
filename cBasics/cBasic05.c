#include<stdio.h>

int main() {

	//제어문
	//if문
	/*
	if ( 조건식 ) 
	조건식이 참이면 실행 
	if 문의 조건식이 참이면 if 문안의 코드를 실행하고, 하위코드를 진행
	거짓이면 if 문의 코드를 실행하지 않고 하위 코드를 진행
	모든 제어문은 한줄까지는 자동으로 자신의 실행코드를 인식하지만,
	2줄 이상부터는 { }를 사용해서 지역을 지정해 주어야 한다
	*/
	int data;
	printf("숫자입력 > ");
	scanf_s("%d", &data);
	puts("");

	if (data % 2 == 1)
		printf("%d : 홀수\n", data);
	if (data % 2 == 0)
		printf("%d : 짝수\n", data);
	puts("- end -");

	//if else문
	/*
	if (조건식){
	조건식이 참이면 실행
	}
	else {
	조건식이 거짓이면 실행
	}
	> if 문의 조건식이 참이면 if문의 코드를 실행하고,
	조건식이 거짓이면 else 문의 코드를 실행
	그렇기 때문에 둘중에 한곳은 무조건 실행 됨
	*/
	int data;
	printf("숫자입력 > ");
	scanf_s("%d", &data);
	printf("data : %d\n", data);
	puts("");

	if (data % 2 == 1) {
		puts("홀수");
	}
	else {
		puts("짝수");
	}
	puts("-end-");

}