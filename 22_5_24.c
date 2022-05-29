#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int  arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}
//int Add(x, y)
//{	
//	int z = 0;
//	z = x + y;
//}
//int main()
//{
//	int sum = 0;
//	sum = Add(3, 5);
//	printf("sum = %d", sum);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 20000) {
//		printf("敲一行代码：%d\n", line);
//		line++;
//	}
//	if (line >= 20000);
//	printf("好offer");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("你会c++吗:>(0 or 1)");
//	scanf("%d", &input);
//	if (input == 0) {
//		printf("好offer");
//	}
//	else
//	{
//		printf("卖红薯");
//	}
//	return 0;
//}
//int main() 
//{ 
//	printf("%s","\332");
//	return 0;
//
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", arr1);
//	printf("%s", arr2);
//	return 0;
//}
//#define A 10
//int main()
//{
//	printf("%d", A);
//	return 0;
//}
//enum Sex
//{
//	meal,
//	femeal,
//	secret
//};
//int main()
//{	
//	enum Sex tom = femeal;
//	printf("%d", tom);
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{	
//	const int num = 0;
//	printf("%d\n",num);
//	//num = 2;
//	//printf("%d\n", num);
//	return 0;
//}