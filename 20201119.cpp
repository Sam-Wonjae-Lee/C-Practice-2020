/*
	[  ]  
*/

#pragma warning(disable:4996)
#include <iostream>

//8-3
//int main()
//{
//	//1. 두 수를 입력하라고 출력한다.
//	printf("숫자 입력: ");
//
//	//2. 실제로 두 수를 입력받을 수 있도록 변수를 2개 만든다.
//	int first;
//	int second;
//
//	//3. 2에서 만든 변수들에 직접 숫자를 입력한다.
//	scanf("%d %d", &first, &second);
//
//	//4. 입력받은 수들 중에 작은 수를 찾아서, 작은 수부터 큰 수까지 1씩 더하면서 출력.
//
//	//두 수를 비교하여 first나 second를 무조건 작은 수로 설정한 후, 작은 수로 설정된
//	//변수부터 1씩 증가하며 반복하면 됨.
//	if (first > second)
//	{
//		int temp = first;
//		first =  second;
//		second = temp;
//	}
//
//	//first가 second보다 무조건 작거나
//	//같아진 상태.
//
//	for (; first <= second; ++first)
//	{
//		printf("%d ", first);
//	}
//
//
//	//무식한 방법.
//	//if (first < second)
//	//{
//	//	for (   ;  first<=second;  ++first /*first += 1*/   )
//	//	{
//	//		printf("%d ", first);
//	//	}
//	//}
//	//else //first >= second
//	//{
//	//	for (; second <= first; ++second)
//	//	{
//	//		printf("%d ", second);
//	//	}
//	//}
//
//	return 0;
//}

//8-6
int main()
{
	//1. 사용자로부터 입력받을 변수를 생성.
	int number;

	//2. 숫자 입력하라고 출력
	printf("number: ");

	//3. 1에서 만든 변수에 숫자를 입력받음
	scanf("%d", &number);

	//4. 사용자가 입력한 수가 2보다 작은지 검사
	//4.1 2보다 작다면-> 소수아니라고 출력
	if (number < 2)
	{
		printf("소수가 아님..\n");
		return 0;
	}

	//5. 2부터 사용자가 입력한 숫자 전까지의
	//수들로 사용자가 입력한 수를 나눠봄.
	//=> 하나라도 나눠 떨어진다면?
	//소수가 아니라고 판단

	bool isPrimeNumber = true;
	for (int divisor = 2; divisor < number; ++divisor)
	{
		if (0 == (number % divisor))
		{
			isPrimeNumber = false;
			break;
		}
	}
	
	if ( isPrimeNumber )
		printf("소수가 맞음\n");
	else
		printf("소수가 아님\n");

	return 0;
}

