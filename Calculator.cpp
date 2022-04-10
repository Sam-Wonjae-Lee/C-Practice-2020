/*
[빌드(build)]
프로스램을 만드는 과정.

빌드=전처리기 -> 컴파일 -> 링킹

전처리기(preprocessor): 컴파일하기 전에 처리되어야할 작업들을 처리하는 작업. 전처리기는 #으로 시작한다.  Ex) #include

컴파일(compile): 사영자가 작성한 소스코드를 기계가 알아들을 수 있는 기계어로 번역하는 작업.

링킹(linking): 헤더파일과(틀) 소스파일(내용)을 연결짓는 작업.  헤더파일 Ex) <iostream>

ctrl + f5를 누르면 재동으로 빌드된 후, 빌드된 프로그램이 실행된다.

[main 함수 의미]
프로그램 시작과 끝을 담당.
시작: main 함수의 {다음
끝: main 함수의 return 0;

[타입(char, int)]
char: character, 문자를 표현하는 타입, ''사이에 문자를 표현.
int: integer, 정수

[변수]
한 가지 값만 저장할 수 있는 장치로 저장되는 값은 변경될 수 있다.

타입 변수이름;
Ex) int number; //정수를 저장할 수 있는 number라는 이름의 변수를 만듦.
                          //현재 number에는 '쓰레기 값'이 저장된다.
						  //쓰레기 값: 사용할 수 없는 값.
           number;  //number라는 변수에 저장된 값이 등장
[대입 연산자]
=
프로그래밍에서의 =은 같다의 의미 아니다.
=오른쪽에 위치하는 값을, =왼쪽에 위치하는 저장공간에 저장시키겠다는 의미이다.
Ex) int number = 10; //정수를 저장할 수 있는 number라는 변수에 10을 저장.
      number = 5; // number라는 변수에 저장됐던 10은 사라지고 5가 저장.

[비교 연산자]
==
==양기호의 양 쪽에 위치하는 값이 같을 때 결과로 '참'을, 다를 때 결과로 '거짓'을 돌려주는 연산자.
참: true, 0이 아닌 모든 수
거짓;false, 0

C/C++의 연산자들에서는 참을 1로 통일해서 표현하고, 거짓을 0으로 통일해서 표현한다.
Ex) 1==2; // 거짓, 0
      100==100; // 참, 1

[사칙 연산자]
+: 양 쪽에 있는 수를 더한 결과를 돌려줌.
-
*
/: /왼쪽에 있는 수를 / 오른쪽에 있는 수로 나눴을 때 몫을 돌려줌.
%: %왼쪽에 있는 수를 % 오른쪽에 있는 수로 나눴을 때 나머지를 돌려줌.
Ex) 1 + 2; //3
      2 * 3; //6
	  5 / 2; // 2
	  5 % 6; //5

[printf]
print + function(기능), 콘솔 창에 사용자가 지정한 문자열을 출력하는 역할
printf("출력하고자 하는 내용")
printf("서식문자", 서식문자에 들어갈 값);

서식문자)
%d: decimal, 10진수 정수
%c: character, 문자
Ex) int number = 10;
      printf("number : %d", number); // 콘솔창에 number: 10이라고 출력

[scanf]
scan + function, 사용자가 입력하는 값을 인식하여 원하는 변수에 저장시켜주는 역할, 사용자가 엔터키를 입력할 때까지 기다림.

scanf("서식문자", &변수이름); //서식문자에 따른 값을 입력하고 엔터키를 치면 그 값을 '변수이름'에 해당하는 변수에 저장.
Ex) scanf("%d', &number); //사용자가 입력한 정수 number에 저장.

[조건물]
조건식의 결과가 참이 되면 {} 안 쪽에 있는 내용을 실행해주는 문법.
if(조건식)
{
	조건식의 결과가 참일 때 실해한 코드;
}
*/
#pragma warning(disable:4996)
#include <iostream>

int main()
{
	printf("Coding\n");
	printf("O\n");
	
	int number = 10;
	int number2 = 20;
	char operation = '+';

	printf("숫자를 입력하세요:");
	scanf("%d", &number);

	while (getchar() != '\n'); 

	printf("연산 기호를 입력하세요:");
	scanf("%c", &operation);

	while (getchar() != '\n');

	printf("숫자를 입력하세요:");
	scanf("%d", &number2);

	if (operation == '+')
	{
		printf("%d %c %d = %d", number, operation, number2, number + number2);
	}

	if (operation == '-')
	{
		printf("%d %c %d = %d", number, operation, number2, number - number2);
	}
	
	if (operation == '*')
	{
		printf("%d %c %d = %d", number, operation, number2, number * number2);
	}
	
	if (operation == '/')
	{
		printf("%d %c %d = %d", number, operation, number2, number / number2);
	}

	if (operation == '%')
	{
		printf("%d %c %d = %d", number, operation, number2, number % number2);
	}
	return 0;
}