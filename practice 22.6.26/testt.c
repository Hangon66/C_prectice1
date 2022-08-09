#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int Fac(int n)
{
    if (n > 1)
    {
        return n * Fac(n - 1);
    }
    return 1;
}


int main()
{

        printf("%d\n",Fac(4));

    
    
    return 0;
}