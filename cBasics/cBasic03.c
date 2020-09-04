#include<stdio.h>

int main() {

	//산술 연산자
	int v1 = 10;
	int v2 = 3;
	printf("v1 : %d, v2 : %d\n", v1, v2);
	printf("/n");

	printf("%d + %d = %d\n", v1, v2, v1 + v2);
	printf("%d - %d = %d\n", v1, v2, v1 - v2);
	printf("%d * %d = %d\n", v1, v2, v1 * v2);
	printf("%d / %d = %d\n", v1, v2, v1 / v2);
	printf("%d %% %d = %d\n", v1, v2, v1 % v2);

	//복합 대입 연산자
	int v3, v4;
	v3 = v4 = 5;
	printf("v3 : %d, v4 : %d\n", v3, v4);
	printf("\n");

	printf("v3 += 1 : %d\n", v3 += 1);
	printf("v3 -= 1 : %d\n", v3 -= 1);
	//5 += 1; Error
	// - 계산후에 나온 결과값을 왼쪽에 넘겨야 하기때문에 왼쪽에는 변수가 위치해야 합니다.

	printf("v3 *= v4 : %d\n", v3 *= v4);

	//관계(비교) 연산자
	double v5 = 3.1;
	double v6 = 3.5;
	printf("v5 : %.1f, v6 : %.1f\n", v5, v6);
	printf("\n");

	printf("v5 <= v6 : %d\n", v5 <= v6);
	printf("v5 == v6 : %d\n", v5 == v6);
	printf("v5 != v6 : %d\n", v5 != v6);

	//논리연산자
	int v7 = 10;
	int v8 = 8;
	printf("v7 = %d, v8 = %d\n", v7, v8);
	printf("\n");

	printf("v7 == 10 && v8 > 10 : %d\n", v7 == 10 && v8 > 10); // 0 (false)
	printf("v7 == 10 || v8 > 10 : %d\n", v7 == 10 || v8 > 10); // 1 (true)
	printf(" v7 : %d\n", !v7); // 0 (false)

	//증감연산자
	int v9 = 5;
	printf("v9 : %d\n", v9);
	printf("\n");

	int res;
	res = ++v9;
	printf("v9 : %d, res : %d\n", v9, res);

	res = v9++;
	printf("v9 : %d, res : %d\n", v9, res);

	res = --v9;
	printf("v9 : %d, res : %d\n", v9, res);

	res = v9--;
	printf("v9 : %d, res : %d\n", v9, res);

	v9 = 5;
	v9++;
	printf("v9 : %d\n", v9);

}