#include <stdio.h>
int sum(int data1, int data2)
{
	
	int result = data1 + data2;
	return result;
}

int main()
{
	int result;
	result = sum(5, 3);
	printf("5 + 3 = %d\n", result);
}
