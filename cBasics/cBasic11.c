#include<stdio.h>

int main() {

	/*
	삼항 연산자
	- ( 조건식 ) ? 값_1(참) : 값_2(거짓);

	  > 조건식이 참이면 ? 뒤에 왼쪽의 값을 사용하고, 거짓이면 오른쪽의 값을 사용
	*/

	int n = -7;

	int abs;

	if (n > 0)
		n = n;
	else
		n *= -1;

	abs = (n > 0) ? n : n * -1;
	printf("abs : %d\n", abs);

	puts("========================");

	/*
	break
	- 실행중인 제어문을 종료 시킬 때 사용합니다
	  > switch, for, while, do while
	- break 문을 포함하고 있는 제어문 하나만을 종료합니다
	*/

	int out = 1;
	while (out < 4) {
		printf("%d회전\n", out);

		int in = 1;
		while (in < 11) {
			printf("%d ", in);
			if (in == 7)
				break;
			++in;
		}
		puts("");

		++out;
	}

	puts("========================");

	/*
	continue
	- 진행중인 반복문 안에서 continue 문이 실행되면,
	  하위의 코드는 실행되지 않고 다음 반복으로 넘어감
	> for, while, do while (반복문에서만 쓰임)
	*/

	int data = 0;
	while (data < 10) {
		++data;
		if (data % 7 == 0) {
			puts("Jump~");
			continue;
		}

		printf("%d\n", data);
	}
	puts("");

	for (int i = 1; i < 11; i++) {
		if (i % 7 == 0) {
			puts("Jump~");
			continue;

		}
		printf("%d\n", i);
	}

}