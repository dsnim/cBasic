/*
전역 변수
*/

int g;    // 전역 변수

void TestFunc();  // 함수 선언

int main() {

	printf("전역 변수 g : %d, 주소 : %p\n", g, &g);

	int a = 10;
	printf("main a : %d, 주소 : %p\n", a, &a);

	TestFunc(); // 함수 호출
	TestFunc();

	printf("g : %d, 주소 : %p\n", g, &g);
}

// 함수 정의
void TestFunc() {
	puts("- TestFunc -");
	int a = 99;
	printf("func a : %d, 주소 : %p\n", a, &a);
	a += 100;

	g += 10;
}