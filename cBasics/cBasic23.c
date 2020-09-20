/*
함수 ( function )
- 하나의 기능을 가진 작은 프로그램 입니다
- 호출하면 실행이 되고, 실행이 끝나면 호출부로 돌아갑니다
*/

// 함수 선언
// - 프로그램안에 어떠한 함수가 정의 되어 있음을 알려줍니다
void UserFunc_1();
void UserFunc_2(int arg);
int UserFunc_3();
double UserFunc_4(int a);

int main() {

	// 함수 호출
	// - 함수이름( 인자값 O, X )
	//   > 인자값 : 함수 실행에 필요한 데이터를 정의부로 보내때 사용합니다
	//             함수 정의부의 매개변수와 타입, 순서, 갯수가 일치해야 합니다
	UserFunc_1();

	int a = 10;
	UserFunc_2(a);

	int v = UserFunc_3();
	printf("v : %d\n", v);

	double p = UserFunc_4(100);
	printf("p : %f\n", p);

}


// 함수 정의 : 함수 호출시에 실행하는 기능 구현

// 반환타입  함수이름  ( 매개 변수 ) {
//       실행 코드
//       return 값;
// }

// 반환 타입 : 함수 실행이 종료되면서 호출부로 돌아갈 때 가져가는 값의 자료형
//            반환값이 없으면 'void'
// 함수 이름 : 함수 실행(호출)시에 사용하는 이름
// 매개 변수 : 함수 실행시에 호출부에서 넘겨주는 값을 받아주는 변수
// return   : 함수 실행후에 나온 결과물을 호출부로 보낼 때 사용하거나,
//            함수의 실행을 종료 시킬 때 사용합니다
//            딱 하나의 값만 반환 할 수 있습니다

double UserFunc_4(int a) {
	puts("- UserFunc_4 -");
	printf("a : %d\n", a);
	double b = 1.2;
	return b;
}

int UserFunc_3() {
	puts("- UserFunc_3 -");
	return 100;
}

void UserFunc_2(int arg) {
	puts("- UserFunc_2 -");
	printf("parameter : %d\n", arg);
}

void UserFunc_1() {
	puts("- UserFunc_1 -");
}