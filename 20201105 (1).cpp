/*
	[ if - else ]
	���α׷��� �帧��  �����ϴ� ���ǹ�.
	{ } �� �ʿ� ������ �ڵ尡 �� ���� ��쿡�� 
	{ }�� �����ϰ� ����� �� �ִ�.

	if���� ������ �ۼ��Ǿ� �ִٸ�, ��� if����
	���ǽĵ��� ��� �˻��ϰ� �ȴ�.

	if( ���ǽ� �Ǵ� ���ǰ� )
	{
		���ǽ� �Ǵ� ���ǰ��� ����� ���� �� ������ �ڵ�;
	}
	else	
	{
		if���� ���ǽ� �Ǵ� ���ǰ��� ����� ������ ��
		�ڵ����� ������ �ڵ�;
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
	if ~ else if ~ else �ϳ��� ������� �����Ǹ�,
	���ǽ� �Ǵ� ���ǰ��� ����� ���� �Ǵ� ���ǿ� ���ؼ���
	{ }�� �����ϰ� �������� ���� �˻���ü�� ���� �ʰ�
	���� ������.

	if ( ���ǽ� �Ǵ� ���ǰ�)
	{
		//
	}
	else if ( ���ǽ� �Ǵ� ���ǰ�)
	{
		//
	}
	else if ( ���ǽ� �Ǵ� ���ǰ�)
	{

	}
	else
	{
		//���� �ִ� ��� ������ ����� ������ ��
		//�ڵ����� ������ �ڵ�;
	}




*/
#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	//7-5
	//1. ����ڷκ��� �Է� ����.
	//int number;
	//printf("���� �Է�: ");
	//scanf("%d", &number);

	//2. �Է¹��� ��ŭ *�� ���.
	//int printed = 0;//��µȰ� ������ ��Ÿ��.
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
	//printf("���� �Է�: ");
	//scanf("%d", &dan);

	//for (int number = 1; number <= 9; ++number)
	//{
	//	printf("%d x %d = %d\n", dan, number, dan * number);
	//}

	//-------------------------------------------------------------

	////7-7
	//int height;
	//printf("���� �Է�: ");
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

	/*printf("���� �Է�: ");
	int number;
	scanf("%d", &number);

	if (number % 2)
	{
		printf("%d��(��) Ȧ��!\n", number);
	}
	else
	{
		printf("%d��(��) ¦��!\n", number);
	}*/



	//-----------------------------------------------

	////8-2
	//int start;
	//int end;
	//printf("���� �Է�: ");
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
	printf("���� �Է�: ");
	scanf("%d %d", &start, &end);

	if (start > end)
	{
		//start�� end�� ���� ���� �¹ٲ�.
		int temp = start;
		start = end;
		end = temp;
	}

	//start�� end���� �۰ų� ������ ��Ȳ.
	for (; start <= end; ++start)
	{
		printf("%d ", start);
	}




	return 0;
}