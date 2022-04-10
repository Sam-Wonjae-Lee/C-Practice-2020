/*
	[ switch ]
	if~ else if 와 마찬가지로, 프로그램의 흐름을 제어하는
	용도의 문법.

	switch ( 조건 값 )
	{
	case 조건값과 비교할 값:
	{
		조건값과 case의 비교할 값이 일치할 때 실행할 코드;
		//break;
	}
	case 조건값과 비교할 값:
	{
		break;
	}
	default:
	{
		조건값과 일치하는 case 값이 하나도 없을 때 실행할 코드;
	}
	}
	//switch를 사용하여, 조건값이 1~3의 범위라면 "!"를, 4~5의 범위라면 "?"를 출력하시오.
	//단, printf는 총 두 번만 사용한다.

*/

//2단부터 9단까지 출력하는 반복문
	//곱하는 수를 1로 설정.
	//한 개 단을 출력하는 반복문
	//출력
	//곱하는 수를 1 증가.

	//단 수를 증가

#include <stdio.h>

//int main()
//{
//	//7-7
//
//	int endLine;
//	printf("숫자 입력: ");
//	scanf("%d", &endLine);
//
//	int nSpace = endLine - 1;//출력할 공백 개수
//
//	for (int currentLine = 1; currentLine <= endLine; ++currentLine)
//	{
//		//공백 출력하는 것을 반복.
//		for( int printed = 0; printed < nSpace; ++printed)
//		{
//			printf(" ");
//		}
//
//		//별 출력하는 것을 반복.
//		for () {}
//		
//		//다음 줄로 바꿈.
//		printf("\n");
//
//		//출력할 공백의 개수는 1 감소
//		--nSpace;
//		//출력할 별의 개수는 1 증가
//	}
//
//	return 0;
//}

#include <iostream>

int main()
{
	switch ( 1 )
	{
	case 1:
	case 2:
	case 3:
	{
		printf("!");
		break;
	}

	case 4:
	case 5:
	{
		printf("?");
		break;
	}
	}

	return 0;
}