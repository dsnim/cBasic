#include<stdio.h>

int main() {

	printf("숫자 : %d\n", 10); //메모리엔 올라가있지만 위치를 알수 없고, 수정불가한 데이터 데이터 리터널상수

	//정수
	int a; //변수 선언(생성)
	//printf("a : %d\\n", a); a); Error: 초기화 되지 않은 변수를 사용하면 Error

	a = 10; //오른쪽에 값을 왼쪽으로 넘김, 변수 초기화
	printf("a : %d\n", a);

	a = 20;
	printf("a : %d\n", a);

	int v1 = 11; //선언과 동시에 초기화
	printf("v1 : %d\n", v1);

	int age = 100;
	printf("나이 : %d 세\n", age);

	//double age; Error: 자료형이 틀리다고 해서 같은 이름의 변수를 선언해서 사용 할 수 없음

	//실수
	double pi = 3.141592;
	printf("pi : %f\n", pi);

	//문자
	char area = 'A';
	printf("area : %c 구역\n", area);
	printf("\n");

	// 문자열
	char hi[50] = "안녕하세요"; //숫자만큼 이어서만듬, 배열명
	printf("인사말 : %s\n", hi);

	char test[50];
	// test = "테스트";
	// 문자열 값은 대입연산자를 사용해서 수정(변경) 할 수 없음

}