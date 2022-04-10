#include <memory>
#include <stdio.h>

int main()
{
	/*문제 2-2*/
	printf("%d + %d = %d\n", 1, 2, 3);

	printf("내 혈액형은 %c형이야!\n", 'O'); 

	printf("내 이름은 %s이고 나이는 %d살이야 ~\n", "이원재", 17);

	printf("내 키는 %dcm야!\n", 182); 

	printf("10*2%4\n");
	
	/*문제 3-5*/
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