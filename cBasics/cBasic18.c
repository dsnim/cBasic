#include <stdio.h>
#include <string.h>

/*
문자열
*/

int main() {

	char word[10] = "smile";
	printf("word : %s\n", word);

	//char word2[] = "smile";
	//printf("word2 : %s\n", word2);

	char word3[] = "smile";
	printf("word3 : %s\n", word3);
	printf("word3 크기 : %d\n", sizeof(word3));
	// C언어는 문자열의 끝에 NULL('\0')값을 사용해서 문자열의 끝을 표시합니다
	// 문자열 사용시에는 항상 NULL 문자가 들어가는 1byte 공간이 추가로 필요합니다

	char word4[] = "good luck";
	printf("word4 : %s\n", word4);

	word4[3] = '\0';
	printf("word4 : %s\n", word4);
	printf("word4 크기 : %d\n", sizeof(word4));

	for (int i = 0; i < sizeof(word4) - 1; i++) {
		putchar(word4[i]);
	}
	puts("");

	printf("시작 주소부터 NULL\0 문자 전까지를 출력합니다\n");
	puts("");

	puts("=======================================");
	puts("");

	/*
	string.h
	- 문자열 관련 함수

	strlen()
	- strlen( 문자열 )
	  > NULL 문자 전까지의 문자의 수를 계산해서 반환하는 함수입니다( byte 단위 )
	*/

	char text[50] = "";
	printf("text 전체 크기 : %d\n", sizeof(text));

	int textLength = strlen(text);
	printf("text 문자 수 : %d\n", textLength);

	for (int i = 0; i < strlen(text); i++) {
		putchar(text[i]);
	}
	puts("");

	int idx = 0;
	while (text[idx] != '\0') {
		putchar(text[idx]);
		++idx;
	}
	puts("");
	puts("=======================================");
	puts("");

	/*
	strcpy()
	- strcpy( 문자열_a, 문자열_b )
	  > 문자열_b의 값을 문자열_a 로 복사합니다

	  strcpy_s( 문자열_a, 복사허용크기, 문자열_b )
	  > 문자열_b의 값을 문자열_a 로 복사할때 허용크기 안의 값인지 확인해서 복사합니다
	*/

	char word5[10];
	strcpy_s(word5, sizeof(word5), "복사가능");
	printf("word5 : %s\n", word5);

	char word6[10] = "New C";
	strcpy_s(word5, sizeof(word5), word6);
	printf("word5 : %s\n", word5);

	puts("");
	puts("=======================================");
	puts("");
	
	/*
	strcmp()
	- strcmp( 문자열_a, 문자열_b )
	  > 문자열_a, 문자열_b 의 값이 같은지를 확인합니다
		- 두개의 문자열 값이 같으면 '0'을 반환하고, 다릅면 '-1' or '1'을 반환합니다
	*/

	char same_1[10] = "abc";
	char same_2[7] = "abe";
	char same_3[] = "abc";
	printf("same_1 : %s\n", same_1);
	printf("same_2 : %s\n", same_2);
	printf("same_3 : %s\n", same_3);
	puts("");

	printf("same_1, same_2 같은가요 ? : %d\n", strcmp(same_1, same_2));
	printf("same_2, same_1 같은가요 ? : %d\n", strcmp(same_2, same_1));
	printf("same_1, same_3 같은가요 ? : %d\n", strcmp(same_1, same_3));
	puts("");

	if (!strcmp(same_1, same_2)) {//if (strcmp(same_1, same_2) == 0) {
		puts("같아요");
	}
	else {
		puts("달라요");
	}

}
