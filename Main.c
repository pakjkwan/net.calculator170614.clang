#include<stdio.h>
int Sum(int, int);
void main()
{
	int num1 = 0, num2 = 0;
	char op[1];
	puts("���� 1 �Է�..");
	scanf("%d", &num1);
	puts("���� 2 �Է�..");
	scanf("%d", &num2);
	puts("������ �Է�..");
	scanf("%s", op);
	printf("�� ���� ���� %d �̴�\n", Sum(num1, num2));
}