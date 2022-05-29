#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void up_sort(int arr[], int sz)//传入的是首元素的地址
{
	int i = 0;
	int flag = 1;
	for (i = 0;i < sz - 1 ;i++)
	{
		
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (1 == flag)
			break;
	}
		
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	up_sort(arr,sz);
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//int main()
//{
//	int arr[3][4] = { {1,1,4},{5,1,4} };
//
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 4;j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	
//	return 0;
//}

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n",ret);
//	return 0;
//}

//int func(int n)
//{
//	if (n <= 1)
//		return 1;
//	else 
//		return n * func(n - 1);
//	/*if (n >= 1)
//	{
//		int fin = n* func(n - 1);
//		return fin;
//	}
//	else
//		return 1;*/
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0; 
//	scanf("%d", &n);
//	ret = func(n);
//	printf("%d", ret);
//	return 0;
//}

//int str_Count(char* str)
//{
//	if (*str != '\0')
//		return 1 + str_Count(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "str";
//	int count = str_Count(arr);
//	printf("%d", count);
//	return 0;
//}