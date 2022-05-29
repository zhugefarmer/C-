#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void test()
{
	static int a = 1;
	a++;
	printf("a=%d\n", a);
}

int main()
{
	int i = 0;
	while (i < 6)
	{
		test();
		i++;
	}
	return 0;
}
//int MAX(num1, num2)
//{
//	num1 > num2 ? num2 : num1;
//}
//int main()
//{
//	int max = 0;
//	max = MAX(8, 3);
//	printf("较小的数是：%d", max);
//	return 0;
//}

//MAX(num1, num2)
//{
//	if (num1 > num2)
//		return num1;
//	else
//		return num2;
//}
//	
//int main()
//{
//	int num1 = 8;
//	int num2 = 2;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("较大值是：%d", max);
//	return 0;
//
//}
//int main()
//{
//	int num1 = 5;
//	int num2 = 9;
//	if (num1 > num2)
//		printf("较大值是：%d", num1);
//	else
//		printf("较大值是：%d", num2);
//
//	return 0;
//}