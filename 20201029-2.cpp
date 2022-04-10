#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	/*문제 3-7
	int number;
	int number2;

	printf("숫자 입력:");
	scanf("%d %d", &number ,&number2);
	printf("%d + %d = %d", number, number2, number + number2);

	return 0;*/

	int number;
	char bloodType;
	float height;

	printf(" 나이:");
	scanf("%d", &number);

	while (getchar() != '\n');

	printf(" 혈액형:");
	scanf("%c", &bloodType);

	while (getchar() != '\n');

	printf(" 키:");
	scanf("%f", &height);

	printf("내 나이는 %d살이고, 혈액형 %c형이야~ 그리고 키는 %fcm야!", number, bloodType, height);


	return 0;
}