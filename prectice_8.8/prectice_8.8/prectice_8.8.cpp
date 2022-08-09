//#define _CRT_SECURE_NO_WARNINGS
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

int power(int n, int m)
{
	if (m>=1)
	{
		return n * power(n,m-1);
	}
	return 1;
}


int main()
{
	int a = 2;
	int b = 4;
	printf("%d ", power(a, b));
}