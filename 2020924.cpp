/*
	[ C/C++에서 제공하는 기본 타입 ]
	타입: 자료(값)의 형태.

	참:    0을 제외한 나머지
	거짓: 0

	bit : 0또는 1을 표현하는 단위.
	2bit : 00, 01, 10, 11, 2^2개의 값을 표현.
	3bit : 2^3, 2*2*2, 8개의 값을 표현
	1byte = 8bit

	bool				:  boolean(부울대수), 참(true)과 거짓(false)을 나타냄.
	                      1byte(8bit)
	char			   : character, 문자, 문자는 ' '사이에 표현, 1byte, 2^8개의 값을 표현
						 -2^7  ~ 2^7-1(-128~127)
						 asciichart.com
	short		   : 정수, 2byte(16bit), 2^16, -2^15~2^15-1 
	long		       : 정수, 4byte, 10L
	int			   : integer(정수), 4byte, 10
	long long   : 정수, 8byte
	long long int : 정수, 8byte
	float			   : floating point, 부동소수점수(소수) 1.5f, 4byte
	double		   : 소수, 8byte, 1.5
	long double : 소수, 16byte


	[ 변수 ]
	단 한가지의 값만 저장할 수 있는 장치, 저장하는 값은 변경될 수 있음.

	타입 변수이름;
	ex) int number; //정수를 저장할 수 있는 변수 number를 만듦.
							  //변수를 만들기만하면 변수에는 사용할 수 없다는 의미의
							  //쓰레기 값이 저장됨.

		 = : 대입연산자, =오른쪽에 위치한 값을 = 왼쪽에 있는 저장공간에 대입.
		 int number2 = 10; //정수를 저장할 수 있는 number2라는 이름의
									  //변수를 만들고 10이라는 값을 대입.
		number2;//number2가 저장하고 있는 값인 10이 등장.
		number2 = 30;//기존에 저장하던 10은 없어지고 30이 남게 됨.

		printf("%d\n", number2);



		[ 관계 연산자 ]
		연산의 결과로 참 또는 거짓을 1 또는 0의 값으로 돌려줌.
		<			
		>
		<= 
		>=
		!=    : !(not) =(equal),양 쪽이 서로 다른 값일 때 참을 돌려줌.
		==   : 양 쪽이 같은 값일 때 참을 돌려줌.
				ex) 1== 2; //false

		[ 논리 연산자 ]
		연산의 결과로 참 또는 거짓을 1 또는 0의 값으로 돌려줌.
		&&	: and, 양 쪽의 값이 둘다 참일 때만 참을 돌려줌.
			    ex) 1 && 2; //true
		||      : or, 양 쪽에 위치하는 값들 중 하나라도 참이면 결과로 참을 돌려줌.
				ex) 1 || 0;  //true
		!       : not, 참이면 거짓으로 거짓이면 참으로 돌려줌.
				ex) !0; //true
					!!0;//false

		[ 산술 연산자 ]
		+
		-
		* : 곱하기
		/ : 왼쪽에 있는 수를 오른쪽에 있는 수로 나눴을 때 몫
		%: 왼쪽에 있는 수를 오른쪽에 있는 수로 나눴을 때 나머지.
			 modulus, modulo, mod
			ex) 2%3; //2

		[ 증감 연산자 ]
		변수가 갖고 있는 값을 1 증가 또는 감소시키는 연산자.
		++ : 변수가 갖는 값을 1 증가.
		--   : 변수가 갖는 값을 1 감소.

		ex) int number=5;
			++number; //현재 줄에서 number의 값이 1 증가. 6
			number++; //다음 줄에서 number의 값이 1 증가. 6
			--number;   //현재 줄에서 number의 값이 1 감소. 6
			number--;   //다음 줄에서 number의 값이 1 감소. 6
			number;     //5


			[ 축약 연산자 ]
			연산자와 대입 연산자를 줄여놓은 것.
			+=
			-=
			*=
			/=
			%=
			&=
			|=
			^=

			ex) int number =5;
				 number = number + 5; // number += 5;
				 number; //10

				 number /= 2; //승재, number = number / 2;   5
				 number %=2;//원재, number = number % 2;  1


		[ scanf ]
		scan + function(formatted), 서식화된 입력을 받는 기능.
		scanf는 사용자가 입력해주는 값을 공백(space) 또는 엔터(줄바꿈) 또는
		탭(\t)으로 구분해서 읽는다.

		& : ampersand, 변수가 갖는 메모리 주소들 중에 가장 앞에 위치한 주소를
		돌려주는 연산자.
		scanf("서식문자", &변수이름);

		ex) int number;
			scanf("%d", &number); //콘솔 창에서 사용자가 입력하고 엔터를 친 
												  // 값이 number에 저장.
			
			int n, n2, n3;
			scanf("%d %d %d", &n, &n2, &n3);
			//10 20 30을 입력


		[ 상수 ] 
		저장하고 있는 값을 변경할 수 없는 장치.
		상수의 이름은 관례적으로 대문자로 표기.
		const 타입 상수이름 = 값;   //const : constant(변하지 않는, 지속적인)
		상수이름 = 값;//error

		ex) const int NUMBER = 100;
		NUMBER;//100
*/

//READ + WRITE + TALK = SKILL

#include <stdio.h>

int main()
{
	printf("aaaaa");
	"abc";
	'a';

	return 0;
}
