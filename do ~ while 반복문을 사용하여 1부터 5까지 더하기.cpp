#include <stdio.h>

int main()
{
	int sum = 0;
	int num = 1;
	
	do{
		
		printf("num(%d) + sum(%d) = ", num, sum);
		
		sum = sum + num;
		
		printf("%d\n", sum);
		
		num++;
	} while(num <= 1000);
	printf("\nResult : num = %d sum = %d\n", num, sum);
 } 
