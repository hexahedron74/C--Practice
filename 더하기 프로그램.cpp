#include <stdio.h>
#include <malloc.h>		/* malloc.free �Լ��� ����ϱ� ���� �߰���*/

typedef struct node
{
	int number;			    /*���� ���� ������ ����*/
	struct node *p_next;    /*���� ��带 ����ų ������*/
} NODE;


void  AddNumber(NODE **pp_head, NODE **pp_tail, int data)
{

	if (NULL !=  *pp_head) {


		(*pp_tail) -> p_next = (NODE *)malloc(sizeof(NODE)); /*�� ��带 �Ҵ���*/
		*pp_tail = (*pp_tail) -> p_next;	/*p_tail(*pp_tail)�� �� ����� �ּ� ���� ������*/
	}else {
		/* p_head ���� NULL�̶� ù ��尡 �߰���. p_head���� ���� ������*/
		*pp_head = (NODE *)malloc(sizeof(NODE));	/*�� ��带 �Ҵ���*/
		*pp_tail = *pp_head;	/* �� ����� �ְ� ���� p_tail(*pp_tail)�� ������*/
	}
	(*pp_tail) -> number = data;		/* �� ����� number�� data���� ������*/
	(*pp_tail) -> p_next = NULL;		/* ���� ��尡 ������ �����*/
}

int main()
{
	/*����� ���۰� ���� ����� ������*/
	NODE *p_head = NULL, *p_tail = NULL, *p;
	int sum = 0, temp;

	while (1) {		/*���� ����: �߰��� 9999�� ������ ������*/
		printf("���ڸ� �Է��ϼ��� (9999�� ������ ����) : ");
		scanf("%d", &temp);
		if (9999 == temp) break;	/*9999�� ������ �Է��� �ߴ���*/
		/*����� ���۰� ���� ����ϴ� �������� �ּ� ���� �Էµ� ���ڸ� ������*/
		AddNumber(&p_head, &p_tail, temp);
	}

	p = p_head;
	while (NULL != p) {
		if (p != p_head) printf(" + ");	/*���߿� ���� ���̿� +�� �����*/
		printf(" %d ", p -> number);		/*�Է��� ���ڸ� �����*/
		sum = sum + p -> number;			/*�Է��� ���ڵ��� �ջ���*/
		p = p -> p_next;					/*���� ���� �̵���*/
	}
	printf(" = %d��n", sum);		/*�ջ� ���� �����*/


	while (NULL != p_head) {		/*p_head ���� NULL�� �� ������ �ݺ���*/
		p = p_head;			/*���� ��带 �����ϱ� ���� p������ ��� �ּ� ���� ������*/
		p_head = p_head -> p_next;	/*���� ��ġ�� ���� ���� �ű�*/
		free(p);					/*����ߴ� �ּҸ� ����Ͽ� ��带 ������*/
	}
	p_tail = p_head;	/*�ݺ����� ������ p_head���� NULL. p_tail���� NULLȣ ������*/
}
