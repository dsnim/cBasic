#include<stdio.h>

/*
변수의 주소 사용
-변수명 앞에 '&'기호를 붙여서 사용하면, 해당 변수의 메모리의 주소값을 사용하게 된다.
-주소값을 출력 할 때에는 서식지정자 '%p'를 사용한다.
*/

int main() {


int v1 = 10;
printf("v1 : %d\\n", v1);
printf("v1 주소 : %p\\n", &v1);

/*
연산식에서의 형변환
- 서로 다른 자료형이 연산하려고 할 때에는,
크기가 작은 자료형이 크기가 큰 자료형으로 형변환되어 실행

sizeof()
- 메모리에 할당 된 데이터 공간의 크기를 계산함( byte 단위 )
*/

double res;

res = 5 / 2;
printf("res : %f\n", res);
printf("5/2 결과의 크기 : %d\n", sizeof(5 / 2)); //인트로 출력
printf("res 크기 : %d\n", sizeof(res)); // 바이트값 출력
printf("\n");

res = 5 / 2.0; // 인트와 더블 연산은 자료형이 큰쪽으로 맞추어짐 '5'를 메모리에 새로운공간을 만들어서 더블로연산 더블과 더블연산으로 실수로계산된다.
printf("res : %f\n", res);
printf("5/2 결과의 크기 : %d\n", sizeof(5 / 2));

/*
대입식에서의 형변환
- 대입연산자 오른쪽의 자료형이 왼쪽의 자료형으로 자동형변환되어 실행됨
   > 데이터 손실이 발생 할 수 있음
*/

double d = 12.3;
int n = d;
printf("n:%d\n", n);

float f = 1.2;

/*
강제형변환
- 사용하려는 데이터의 왼쪽에 '(자료형)'을 작성하면,
순간적으로 ()안의 자료형 타입으로 형변환되어 실행
 Ex> (변환자료형)데이터
*/
int n1 = 5;
int n2 = 2;
double div;

div = n1 / n2;
printf("div : %f\n", div);

div = (double)n1 / n2;
printf("div : %f\n", div);
printf("n1 크기 : %d\n", sizeof(n1));

/*
ASCII 코드
문자를 입력해도 컴퓨터는 숫자로 저장하는데 그숫자가 아스키코드, 문자를 숫자로도 출력함
*/

char ch = 'A';
printf("ch : %c, %d\\n", ch, ch);

int b = 2;

int result = ch + b;
printf("result : %d,%c\\n", result, result);

char ch2 = 'a';
printf("ch2 : %d\\n", ch2);
printf("ch + 32 : %c\\n", ch + 32);

int data = 123;
printf("%d\\n", data);
printf("%5d|\\n", data); //서식지정자앞에 숫자를 사용하면 그숫자만큼 공간을 확보하여 출력함
printf("%-5d|\\n", data); //+값이면 오른쪽, -값이면 왼쪽부터 채움**

printf("\\n");

double data2 = 1.12;
printf("%f\\n", data2);
printf("%.2f\\n", data2);
printf("%5.2f\\n", data2);
// 실수 데이터 출력시 서식지정자 안에 '.숫자' 를 작성하면,
// 숫자까지의 소수점 자리를 출력함

}