/*
	[  ]  
*/

#pragma warning(disable:4996)
#include <iostream>

//8-3
//int main()
//{
//	//1. �� ���� �Է��϶�� ����Ѵ�.
//	printf("���� �Է�: ");
//
//	//2. ������ �� ���� �Է¹��� �� �ֵ��� ������ 2�� �����.
//	int first;
//	int second;
//
//	//3. 2���� ���� �����鿡 ���� ���ڸ� �Է��Ѵ�.
//	scanf("%d %d", &first, &second);
//
//	//4. �Է¹��� ���� �߿� ���� ���� ã�Ƽ�, ���� ������ ū ������ 1�� ���ϸ鼭 ���.
//
//	//�� ���� ���Ͽ� first�� second�� ������ ���� ���� ������ ��, ���� ���� ������
//	//�������� 1�� �����ϸ� �ݺ��ϸ� ��.
//	if (first > second)
//	{
//		int temp = first;
//		first =  second;
//		second = temp;
//	}
//
//	//first�� second���� ������ �۰ų�
//	//������ ����.
//
//	for (; first <= second; ++first)
//	{
//		printf("%d ", first);
//	}
//
//
//	//������ ���.
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
	//1. ����ڷκ��� �Է¹��� ������ ����.
	int number;

	//2. ���� �Է��϶�� ���
	printf("number: ");

	//3. 1���� ���� ������ ���ڸ� �Է¹���
	scanf("%d", &number);

	//4. ����ڰ� �Է��� ���� 2���� ������ �˻�
	//4.1 2���� �۴ٸ�-> �Ҽ��ƴ϶�� ���
	if (number < 2)
	{
		printf("�Ҽ��� �ƴ�..\n");
		return 0;
	}

	//5. 2���� ����ڰ� �Է��� ���� ��������
	//����� ����ڰ� �Է��� ���� ������.
	//=> �ϳ��� ���� �������ٸ�?
	//�Ҽ��� �ƴ϶�� �Ǵ�

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
		printf("�Ҽ��� ����\n");
	else
		printf("�Ҽ��� �ƴ�\n");

	return 0;
}

