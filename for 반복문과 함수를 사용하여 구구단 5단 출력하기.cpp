#include <stdio.h>

void ShowMultiplicaton(int step)
{
	int i;
	
	for(i = 1; i <= 9; i++) {
		
		printf("%d * %d = %d\n", step, i, step * i);
	}
}

int main()
{
	
	ShowMultiplicaton(5);
}
