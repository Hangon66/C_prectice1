#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <windows.h>
//#include <math.h>
#include <string.h>
//#include <time.h>
//#include <stdlib.h>

//void test();
//
//int a = 5;
//int main()
//{
//	printf("%d ", a);
//	a = 10;
//	printf("%d ", a);
//
//	test();
//	printf("%d ", a);
//
//	return 0;
//}
//
//void test()
//{
//	printf("%d ", a);
//
//	a = 9;
//	printf("%d ", a);
//------------------------------------
//����һ������������ĸ�������֮��
//}
//int digitsum(int x)
//{
//	if(x>=10)
//	{ 
//		return x%10 + digitsum(x / 10);
//	}
//	return x;
//}
//
//
//int main()
//{
//	int a = 1234;
//	
//	printf("%d", digitsum(a));
//}
//--------------------------------------------
//�õݹ�ʵ��a��n�η�
//double power(int n, int m)
//{
//	if (m>0)
//	{
//		return n * power(n,m-1);
//	}
//	
//	if (m < 0)
//	{
//		return 1.0/power(n,-m);
//	}
//	return 1.0;
//}
//
//
//int main()
//{
//	int a = -2;
//	int b =  3;
//	printf("%lf ", power(a,b));
//}
//-----------------------------------
// ������ָ��ļ򵥲���
//int main()
//{
//	
//	char arr[] = "abcdef";
//	int a = sizeof(arr) / sizeof(arr[0]);
//	return 0;
//}
//-----------------------------------------------------
//&������+n
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);


}