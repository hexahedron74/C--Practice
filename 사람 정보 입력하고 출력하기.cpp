#include <stdio.h>

typedef struct People
{
	char name[12];
	unsigned short int age;
	float height;
	float weight;
} Person;

int main()
{
	Person data;

	printf("������� ������ �Է��ϼ��䡬n");
	printf("�̸� : ");
	scanf("%s", data.name);
	printf("���� : ");
	scanf("%hu", &data.age);
	printf("Ű : ");
	scanf("%f", &data.height);
	printf("������ : ");
	scanf("%f", &data.weight);

	printf("��n�Է��� ������ ������ �����ϴ�. ��n");

	printf("%s : %d��, %.1fcm, %.1fkg��n", data.name, data.age, data.height, data.weight);
}
