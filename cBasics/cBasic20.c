#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
rand()
- rand()
  > 0 ~ 32767 사이의 임의의 수를 생성해서 반환하는 함수
  > 'stdlib.h' 헤더파일 필요

srand()
- srand( 초기값 )
  > rand() 함수의 초기값을 설정해주는 함수

time()
- time(NULL)
  > 1970년 1월 1일 0시부터 현재까지의 시간을 초단위로 반환하는 함수
  > 'time.h' 헤더파일 필요
*/

int main() {

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++) {
		int data = rand() % 10 + 1; // 범위 : rand() % 갯수 + 시작값
		printf("%d\n", data);
	}

	int al_range = 'Z' - 'A' + 1;
	char ra = rand() % al_range + 'A';
	printf("%c\n", ra);

}