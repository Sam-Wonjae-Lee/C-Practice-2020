/*
	[ switch ]
	if~ else if �� ����������, ���α׷��� �帧�� �����ϴ�
	�뵵�� ����.

	switch ( ���� �� )
	{
	case ���ǰ��� ���� ��:
	{
		���ǰ��� case�� ���� ���� ��ġ�� �� ������ �ڵ�;
		//break;
	}
	case ���ǰ��� ���� ��:
	{
		break;
	}
	default:
	{
		���ǰ��� ��ġ�ϴ� case ���� �ϳ��� ���� �� ������ �ڵ�;
	}
	}
	//switch�� ����Ͽ�, ���ǰ��� 1~3�� ������� "!"��, 4~5�� ������� "?"�� ����Ͻÿ�.
	//��, printf�� �� �� ���� ����Ѵ�.

*/

//2�ܺ��� 9�ܱ��� ����ϴ� �ݺ���
	//���ϴ� ���� 1�� ����.
	//�� �� ���� ����ϴ� �ݺ���
	//���
	//���ϴ� ���� 1 ����.

	//�� ���� ����

#include <stdio.h>

//int main()
//{
//	//7-7
//
//	int endLine;
//	printf("���� �Է�: ");
//	scanf("%d", &endLine);
//
//	int nSpace = endLine - 1;//����� ���� ����
//
//	for (int currentLine = 1; currentLine <= endLine; ++currentLine)
//	{
//		//���� ����ϴ� ���� �ݺ�.
//		for( int printed = 0; printed < nSpace; ++printed)
//		{
//			printf(" ");
//		}
//
//		//�� ����ϴ� ���� �ݺ�.
//		for () {}
//		
//		//���� �ٷ� �ٲ�.
//		printf("\n");
//
//		//����� ������ ������ 1 ����
//		--nSpace;
//		//����� ���� ������ 1 ����
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