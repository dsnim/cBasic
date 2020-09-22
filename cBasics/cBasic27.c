#include <stdio.h>

/*
정수, 실수, 문자변수 생성하고 각 변수의 주소를 저장하는 포인터 변수를 만들고 초기화
포인터 변수를 사용해서 값을 입력받고 출력
*/

int main() {

	int v1;
	int* pv1 = &v1;
	printf("정수입력 > "); scanf_s("%d", pv1);
	printf("v1 : %d\n", v1);
	puts("");

	double v2;
	double* pv2 = &v2;
	printf("실수입력 > "); scanf_s("%d", pv2);
	printf("v2 : %d\n", v2);
	puts("");

	double v3;
	double* pv3 = &v3;
	printf("문자입력 > ");
	while (getchar() != '\n');
	scanf_s("%c", pv3);
	printf("v3 : %c\n", v3);
	puts("");
}
