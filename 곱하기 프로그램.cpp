#include <stdio.h>
#define N 20
int main(int argc, char** argv)
{
	int number = 0;
	printf("숫자를 입력하세요 :");
	scanf("%d", &number);
	printf("당신이 입력한 숫자는 %d입니다,\n", number);
	
	int i = 0;
	for(i = 1; i <= number ; i++)
	{
		printf("9 * %d는 %d입니다. \n", i, i*9);
	}
	 
}

//Enter the number
//
