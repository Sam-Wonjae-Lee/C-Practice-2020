/*
	[ C/C++���� �����ϴ� �⺻ Ÿ�� ]
	Ÿ��: �ڷ�(��)�� ����.

	��:    0�� ������ ������
	����: 0

	bit : 0�Ǵ� 1�� ǥ���ϴ� ����.
	2bit : 00, 01, 10, 11, 2^2���� ���� ǥ��.
	3bit : 2^3, 2*2*2, 8���� ���� ǥ��
	1byte = 8bit

	bool				:  boolean(�ο���), ��(true)�� ����(false)�� ��Ÿ��.
	                      1byte(8bit)
	char			   : character, ����, ���ڴ� ' '���̿� ǥ��, 1byte, 2^8���� ���� ǥ��
						 -2^7  ~ 2^7-1(-128~127)
						 asciichart.com
	short		   : ����, 2byte(16bit), 2^16, -2^15~2^15-1 
	long		       : ����, 4byte, 10L
	int			   : integer(����), 4byte, 10
	long long   : ����, 8byte
	long long int : ����, 8byte
	float			   : floating point, �ε��Ҽ�����(�Ҽ�) 1.5f, 4byte
	double		   : �Ҽ�, 8byte, 1.5
	long double : �Ҽ�, 16byte


	[ ���� ]
	�� �Ѱ����� ���� ������ �� �ִ� ��ġ, �����ϴ� ���� ����� �� ����.

	Ÿ�� �����̸�;
	ex) int number; //������ ������ �� �ִ� ���� number�� ����.
							  //������ ����⸸�ϸ� �������� ����� �� ���ٴ� �ǹ���
							  //������ ���� �����.

		 = : ���Կ�����, =�����ʿ� ��ġ�� ���� = ���ʿ� �ִ� ��������� ����.
		 int number2 = 10; //������ ������ �� �ִ� number2��� �̸���
									  //������ ����� 10�̶�� ���� ����.
		number2;//number2�� �����ϰ� �ִ� ���� 10�� ����.
		number2 = 30;//������ �����ϴ� 10�� �������� 30�� ���� ��.

		printf("%d\n", number2);



		[ ���� ������ ]
		������ ����� �� �Ǵ� ������ 1 �Ǵ� 0�� ������ ������.
		<			
		>
		<= 
		>=
		!=    : !(not) =(equal),�� ���� ���� �ٸ� ���� �� ���� ������.
		==   : �� ���� ���� ���� �� ���� ������.
				ex) 1== 2; //false

		[ ���� ������ ]
		������ ����� �� �Ǵ� ������ 1 �Ǵ� 0�� ������ ������.
		&&	: and, �� ���� ���� �Ѵ� ���� ���� ���� ������.
			    ex) 1 && 2; //true
		||      : or, �� �ʿ� ��ġ�ϴ� ���� �� �ϳ��� ���̸� ����� ���� ������.
				ex) 1 || 0;  //true
		!       : not, ���̸� �������� �����̸� ������ ������.
				ex) !0; //true
					!!0;//false

		[ ��� ������ ]
		+
		-
		* : ���ϱ�
		/ : ���ʿ� �ִ� ���� �����ʿ� �ִ� ���� ������ �� ��
		%: ���ʿ� �ִ� ���� �����ʿ� �ִ� ���� ������ �� ������.
			 modulus, modulo, mod
			ex) 2%3; //2

		[ ���� ������ ]
		������ ���� �ִ� ���� 1 ���� �Ǵ� ���ҽ�Ű�� ������.
		++ : ������ ���� ���� 1 ����.
		--   : ������ ���� ���� 1 ����.

		ex) int number=5;
			++number; //���� �ٿ��� number�� ���� 1 ����. 6
			number++; //���� �ٿ��� number�� ���� 1 ����. 6
			--number;   //���� �ٿ��� number�� ���� 1 ����. 6
			number--;   //���� �ٿ��� number�� ���� 1 ����. 6
			number;     //5


			[ ��� ������ ]
			�����ڿ� ���� �����ڸ� �ٿ����� ��.
			+=
			-=
			*=
			/=
			%=
			&=
			|=
			^=

			ex) int number =5;
				 number = number + 5; // number += 5;
				 number; //10

				 number /= 2; //����, number = number / 2;   5
				 number %=2;//����, number = number % 2;  1


		[ scanf ]
		scan + function(formatted), ����ȭ�� �Է��� �޴� ���.
		scanf�� ����ڰ� �Է����ִ� ���� ����(space) �Ǵ� ����(�ٹٲ�) �Ǵ�
		��(\t)���� �����ؼ� �д´�.

		& : ampersand, ������ ���� �޸� �ּҵ� �߿� ���� �տ� ��ġ�� �ּҸ�
		�����ִ� ������.
		scanf("���Ĺ���", &�����̸�);

		ex) int number;
			scanf("%d", &number); //�ܼ� â���� ����ڰ� �Է��ϰ� ���͸� ģ 
												  // ���� number�� ����.
			
			int n, n2, n3;
			scanf("%d %d %d", &n, &n2, &n3);
			//10 20 30�� �Է�


		[ ��� ] 
		�����ϰ� �ִ� ���� ������ �� ���� ��ġ.
		����� �̸��� ���������� �빮�ڷ� ǥ��.
		const Ÿ�� ����̸� = ��;   //const : constant(������ �ʴ�, ��������)
		����̸� = ��;//error

		ex) const int NUMBER = 100;
		NUMBER;//100
*/

//READ + WRITE + TALK = SKILL

#include <stdio.h>

int main()
{
	printf("aaaaa");
	"abc";
	'a';

	return 0;
}