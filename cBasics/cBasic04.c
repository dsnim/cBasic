﻿#include<stdio.h>

int main() {

	// 문자
	char val;
	printf("문자 입력 > ");
	val = getchar(); //버퍼에서 1비트값만 빼옴
	printf("val : %c\n", val);
	putchar(val); //1바이트 값만 출력 putchar로 줄바꿈 불가능
	printf("\n");

	// 숫자
	int v1;
	printf("숫자 입력 > ");
	scanf_s("%d", &v1);
	printf("v1 : %d\n", v1);
	printf("\n");

	// 실수
	// - float : %f
	// - double : %lf(엘에프) 사용
	float v2;
	double v3;
	printf("실수 2개 입력 > ");
	//scanf("%f%lf", &v2, &v3);
	scanf_s("%f%lf", &v2, &v3);
	printf("v2 : %.1f, v3 : %.1f\n", v2, v3);
	printf("\n");

	// 문자
	char v4;
	printf("문자입력 >");
	//scanf("%c", & v4);
	while (getchar() != '\n'); //buffer 비우기
	scanf_s("%c", &v4, 1);
	printf("v4 : %c, %d\n", v4, v4);
	printf("\n");

	// 문자열
	// - 배열명이 가지고 있는값이 주소이기 때문에
	//   문자열 입력 처리시에는 '&'기호를 사용하지 않아도 됨
	char word[20];
	printf("문자열입력 >");
	//scanf("%s", word);
	//scanf_s("%s", word, 20); // 전체값의 -1만 인식, scanf는 전체값이 다올라가지만 에러(다른영역을 깨트림), scanf_s는 출력자체가 안됨
	scanf_s("%s", word, sizeof(word));
	printf("word : %s\n", word);
	printf("\n");

	char word2[10];
	printf("단어 입력2 > ");
	while (getchar() != '\n');
	scanf_s("%s", word2, sizeof(word2));
	printf("word2 : %s\n", word2);
	printf("\n");

	// 띄어쓰기 입력
	// - gets_s( 입력위치, 허용크기 )
	char stn[50];
	printf("문장 입력 > ");
	gets_s(stn, sizeof(stn));
	printf("stn : %s\n", stn);
	puts(stn);
	puts(""); // 문자열에 출력하고나서 자동 줄바꿈

}