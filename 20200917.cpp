#include <memory>
#include <stdio.h>

int main()
{
	/*���� 2-2*/
	printf("%d + %d = %d\n", 1, 2, 3);

	printf("�� �������� %c���̾�!\n", 'O'); 

	printf("�� �̸��� %s�̰� ���̴� %d���̾� ~\n", "�̿���", 17);

	printf("�� Ű�� %dcm��!\n", 182); 

	printf("10*2%4\n");
	
	/*���� 3-5*/
	int number = 50;
	++number;
	number++;
	number += 5;
	number /= 2;
	--number *= 2;

	printf("number : %d\n", number--);




	system("pause");

	return 0;
}