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


	return 0;
}