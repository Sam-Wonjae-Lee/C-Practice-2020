#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	/*���� 3-7
	int number;
	int number2;

	printf("���� �Է�:");
	scanf("%d %d", &number ,&number2);
	printf("%d + %d = %d", number, number2, number + number2);

	return 0;*/

	/*���� 3-8
	int number;
	char bloodType;
	float height;

	printf(" ����:");
	scanf("%d", &number);

	while (getchar() != '\n');

	printf(" ������:");
	scanf("%c", &bloodType);

	while (getchar() != '\n');

	printf(" Ű:");
	scanf("%f", &height);

	printf("�� ���̴� %d���̰�, ������ %c���̾�~ �׸��� Ű�� %fcm��!", number, bloodType, height);


	return 0;*/

	/*���� 7-1
	int number = 1;
	while (number <= 10)
	{
		printf("%d ", number);
		++number;
	}*/
	
	/*for (int number = 1; number <= 10; ++number)
		{
		printf("%d ", number);
		}*/

	/*do
	{
		printf("%d ", number);
		++number;
	} while (number <= 10);*/


	/*for (int number = 10; number >= 2; number=number-2)
	{
		printf("%d ", number);
	}*/
	
	
	int number;
	int number2 = 1;

	printf("���� �Է�:");
	scanf("%d", &number);

	while (number2 <= number)
	{
		printf("%d ", number2);
		++number2;
	}

	return 0;
}