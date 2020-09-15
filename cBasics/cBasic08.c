#include <stdio.h>

int main() {

	/*
	switch 문
	- switch( 값 ){
	  case 상수값 :
			  실행 코드
			  break;
	  case 상수값 :
			  실행 코드
			  break;
	  case 상수값 :
			  실행 코드
			  break;
		  .....
	  default :  // 아무것도 매칭되는 케이스가 없을때 실행 필요할때작성 필요없으면 작성x
			  실행 코드

	  }(1

	  >swhich 문안에 있는 값과 정확하게 매칭되는 case 값을 찾아서 실행
	   swhich 문안에 적용 할 수 있는 값은 정수, 문자만 가능 < 실수, 문자열 사용x >
	   case 에 설정하는 값은 상수만 가능
	*/

	int value = 4;
	printf("value : %d\n", value);
	puts("");

	switch (value) {
	case 1: //case로 사용되는 값은 변수를 사용할수 없음
		puts("1 - one");
		break;
	case 2:
		puts("2 - two");
		break;
	case 3:
		puts("3 - three");
		break;
	default:
		puts("모름");
	}

	puts("=====================");

	char select;
	printf("python : p, java : J 선택 > ");
	scanf_s("%c", &select, 1);
	puts("");

	switch (select) {
	case 'p' || 'P':
		puts("python 을 선택 하셨습니다..");
		break;
	case 'j':
	case 'J':
		puts("Java 를 선택 하셨습니다..");
		break;
	default:
		puts("잘못 입력하셨습니다.");
	}
}