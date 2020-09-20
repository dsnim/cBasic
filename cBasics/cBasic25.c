#include<stdio.h>

// 재귀호출 : 프로그램 종료시 지나온순서대로 종료

void RecursiveCall(int arg) {
	printf("%d\n", arg);
	if (arg < 3)
		RecursiveCall(arg + 1);
	printf("%d\n", arg);
}

int main() {

	RecursiveCall(1);

}
