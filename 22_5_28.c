#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int str_len(char* str)
{
	int count = 0;
	while (*str !=  '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char ch[] = "stiei";
	int len = str_len(ch);
	printf("%d", len);
	return 0;
}

//void print(int num)
//{
//	
//	if (num > 9)
//	{
//		print(num/10);	
//	}
// 	printf("%d\n", num % 10);
//}
//int main()
//{
//	int n = 1234;
//	print(1234);
//	
//	return 0;
//}

//void Add(int * p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//		printf("num=%d\n", num);
//	Add(&num);
//		printf("num=%d\n", num);
//	Add(&num);
//		printf("num=%d\n", num);
//	return 0;
//}

//int Search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Search(arr, 15, sz);
//	if (ret == -1)
//		printf("没找到");
//	else
//		printf("找到了，下标是%d", ret);
//	return 0;
//}

//int is_prime(int n)
//{
//	int a = 0;
//	
//	for (a = 2; a < n; a++)
//	{
//		if (n % a == 0)
//			return 0;
//	}
//	return 1;
//		
//	
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1;i < 200;i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d是素数\n", i);
//	}
//	return 0;
//}

//void Sw(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = * pa;
//	* pa = * pb;
//	* pb = tmp;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("a = %d b = %d\n", a, b);
//	Sw(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int get_Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
//int main()
//{
//	int a = 20;
//	int b = 39;
//	int max = get_Max(a, b);
//	printf("max = %d", max);
//	return 0;
//}
//int main()
//{
//	char ch1[] = "stiei";
//	char ch2[20] = "#########";
//	strcpy(ch2, ch1);
//	printf("%s",ch2);
//	return 0;
//}