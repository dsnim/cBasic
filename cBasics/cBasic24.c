#include <stdio.h>

int InputInt();
void ShowAdd(int arg1, int arg2);
int LastSum(int last);
void ShowSum(int last, int sum);

int main() {

	int a;
	//printf("숫자 입력 > "); scanf_s("%d", &a);
	//printf("a : %d", a);
	a = InputInt();
	int b = InputInt();
	ShowAdd(a, b);

	int last = InputInt();
	int sum = LastSum(last);
	ShowSum(last, sum);
}

void ShowSum(int last, int sum) {
	printf("1 ~ %d 까지의 합 : %d\n", last, sum);
}

int LastSum(int last) {
	//int last = 10;
	int sum = 0;
	for (int i = 1; i <= last; i++) {
		sum += i;
	}
	return sum;
}

void ShowAdd(int arg1, int arg2) {
	printf("%d + %d = %d\n", arg1, arg2, arg1 + arg2);
}

int InputInt() {
	int value;
	printf("숫자 입력 > "); scanf_s("%d", &value);
	return value;
}