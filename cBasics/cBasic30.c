#include<stdio.h>

/*
배열과 포인터 (포인터는 변수)
*/

int main() {

	int ar[3] = { 1, 2, 3 };
	int* p = ar;

	// p                     ar  [0]   [1]   [2]
	// | F0 |                  |  1  |  2  |  3  |
	//                        F0    F4    F8

	// p           (F0) == ar         (F0)
	// p + 1	     (F4) == ar + 1     (F4)
	// *(p+1)      (2)  == *(ar+1)    (2)
	// p[1]        (2)  == ar[1]      (2)

	for (int i = 0; i < 3; i++) {
		printf("ar[%d] : %d, %d, %d, %d\n", i, ar[i], *(ar + i), *(p + i), p[i]);
	}
	puts("");

	//ar += 1; Error
	p += 1;

	//++ar Error
	++p;
	printf("*p : %d\n", *p);

	puts("=========================");

/*
포인터 배열
*/

	int z1 = 10;
	int z2 = 20;
	int z3 = 30;

	int* p[3];

	p[0] = &z1;
	p[1] = &z2;
	p[2] = &z3;

	printf(" *p[1] : %d\n", *p[1]);
	printf(" *(p + 1) : %p\n ", *(p + 1), p[1]);


	puts("=========================");

	int el_1[] = { 1, 2, 3 };
	int el_2[] = { 4, 5, 6, 7 };

	int* line[2];

	line[0] = el_1;
	line[1] = el_2;

	printf("line[1][1] : %d\n", line[1][1]);
	printf("line[1] + 1 : %d\n", *(line[1] + 1));

}