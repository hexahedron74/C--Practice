#include <stdio.h>

int sum(int value1, int value2)
{
	int result = value1 + value2;
	return result;
}
int main(int argc, char** argv)
{
	int s;
	s = sum(2, 3);
	printf("더하기 작업의 결과는 %d ＼n", s);
}
