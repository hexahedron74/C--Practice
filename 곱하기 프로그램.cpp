#include <stdio.h>
#define N 20
int main(int argc, char** argv)
{
	int number = 0;
	printf("���ڸ� �Է��ϼ��� :");
	scanf("%d", &number);
	printf("����� �Է��� ���ڴ� %d�Դϴ�,\n", number);
	
	int i = 0;
	for(i = 1; i <= number ; i++)
	{
		printf("9 * %d�� %d�Դϴ�. \n", i, i*9);
	}
	 
}

//Enter the number
//
