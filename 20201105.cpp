/*
	[ if - else ]
	프로그램의 흐름을  제어하는 조건문.
	{ } 안 쪽에 실행할 코드가 한 줄일 경우에는 
	{ }를 생략하고 사용할 수 있다.

	if문이 여러개 작성되어 있다면, 모든 if문의
	조건식들을 모두 검사하게 된다.

	if( 조건식 또는 조건값 )
	{
		조건식 또는 조건값의 결과가 참일 때 실행할 코드;
	}
	else	
	{
		if문의 조건식 또는 조건값의 결과가 거짓일 때
		자동으로 실행할 코드;
	}

	ex) int n = 0; 
	if ( 10 == n )
	{
		printf("!");
	}
	if ( n == 0 )
	{
		printf("?");
	}

	[ if - else if - else ]
	if ~ else if ~ else 하나의 블록으로 구성되며,
	조건식 또는 조건값의 결과가 참이 되는 조건에 대해서만
	{ }를 실행하고 나머지는 조건 검사자체를 하지 않고
	빠져 나간다.

	if ( 조건식 또는 조건값)
	{
		//
	}
	else if ( 조건식 또는 조건값)
	{
		//
	}
	else if ( 조건식 또는 조건값)
	{

	}
	else
	{
		//위에 있는 모든 조건의 결과가 거짓일 때
		//자동으로 실행할 코드;
	}




*/
#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	//7-5
	//1. 사용자로부터 입력 받음.
	//int number;
	//printf("숫자 입력: ");
	//scanf("%d", &number);

	//2. 입력받은 만큼 *을 출력.
	//int printed = 0;//출력된게 없음을 나타냄.
	//while (printed < number)
	//{
	//	printf("*");
	//	++printed;
	//}

	//for (printed = 0; printed < number; ++printed)
	//{
	//	printf("*");
	//}


	//-------------------------------------------------------------

	////7-12
	//int dan;
	//printf("숫자 입력: ");
	//scanf("%d", &dan);

	//for (int number = 1; number <= 9; ++number)
	//{
	//	printf("%d x %d = %d\n", dan, number, dan * number);
	//}

	//-------------------------------------------------------------

	////7-7
	//int height;
	//printf("숫자 입력: ");
	//scanf("%d", &height);

	//
	//int line = 1;
	//while (line <= height)
	//{
	//	int printedStar = 0;
	//	while (printedStar < line)
	//	{
	//		printf("*");
	//		++printedStar;
	//	}

	//	++line;
	//	printf("\n");
	//}


	//-------------------------------------------

	/*printf("숫자 입력: ");
	int number;
	scanf("%d", &number);

	if (number % 2)
	{
		printf("%d은(는) 홀수!\n", number);
	}
	else
	{
		printf("%d은(는) 짝수!\n", number);
	}*/



	//-----------------------------------------------

	////8-2
	//int start;
	//int end;
	//printf("숫자 입력: ");
	//scanf("%d %d", &start, &end);

	//for (; start <= end; ++start)
	//{
	//	if (0 == (start % 5))
	//		printf("%d ", start);
	//}

	//-----------------------------------------

	//8-3
	int start;
	int end;
	printf("숫자 입력: ");
	scanf("%d %d", &start, &end);

	if (start > end)
	{
		//start와 end의 값을 서로 맞바꿈.
		int temp = start;
		start = end;
		end = temp;
	}

	//start가 end보다 작거나 같아진 상황.
	for (; start <= end; ++start)
	{
		printf("%d ", start);
	}




	return 0;
}
