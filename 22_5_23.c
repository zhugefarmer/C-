# include <stdio.h>
int main()
{
	//printf("hello world!");
	int num1 = 0;
	int num2 = 0;

	scanf_s("%d%d", &num1, &num2);

	int sum = 0;
	sum = num1 + num2;

	printf("sum = %d", sum);

	return 0;
}