#include<stdio.h>
int Sum(int, int);
void main()
{
	int num1 = 0, num2 = 0;
	char op[1];
	puts("숫자 1 입력..");
	scanf("%d", &num1);
	puts("숫자 2 입력..");
	scanf("%d", &num2);
	puts("연산자 입력..");
	scanf("%s", op);
	printf("두 수의 합은 %d 이다\n", Sum(num1, num2));
}