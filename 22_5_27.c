#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char pwd[20] = {0};
	int i = 0;
	
	for (i=0;i < 3;i++)
	{
		scanf("%s", pwd);
		if (strcmp(pwd, "123456") == 0)
		{
			printf("������ȷ��\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	
	}
	if (i == 3)
		printf("������������˳�ϵͳ��");
	return 0;
}

//int main()
//{
//	char arr1[] = "welcome to stiei!!!!!!";
//	char arr2[] = "######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		 arr2[left] =  arr1[left];
//		 arr2[right] = arr1[right];
//		 left++;
//		 right--;
//		 printf("%s\n", arr2);
//		 Sleep(1000);
//		 system("cls");
//	}
//	printf("welcome to stiei!!!!!!");
//	return 0;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	
//
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d", mid);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int fin = 0;
//	/*scanf("%d", & n);*/
//	for (i = 1; i <= 10;i++)
//	{
//		ret = ret*i;
//		fin += ret;
//	}
//	printf("ret = %d\n", fin);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	} 
//	while (i <= 10);
//		
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0;k = 0;i++, k++) 
//		k++;
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j < 10;j++)
//		{
//			printf("%d%dhehe\n",i,j);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i == 6)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')
//			continue;
//		else
//			putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char pwd[20] = { 0 };
//	int con = 0;
//	
//	printf("����������:>");
//	scanf("%s", pwd);
//	printf("��ȷ������:>");
//	printf("��ȷ��(Y/N):>");
//	while (getchar() != '\n')
//	{
//		;
//	}
//	con = getchar();
//	if (con == 'Y')
//	{
//		printf("ȷ�ϳɹ���");
//	}
//	else
//	{
//		printf("ȷ��ʧ�ܣ�");
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default :
//		printf("����������������롣\n");
//		break;
//
//	}
//	return 0;
//}