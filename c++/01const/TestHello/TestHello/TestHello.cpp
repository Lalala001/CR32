// TestHello.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


typedef  int BOOL;
#define TRUE 1
#define FALSE 0

void foo_bool() {
    bool bRet = true;
    bRet = false;

    if (bRet) {

    }

    BOOL b = TRUE;
    b = FALSE;

    int nSize = sizeof(bool);
    nSize = sizeof(BOOL);

    //while (0)
    //{

    //}
}

//const
//����--����

//c�����еĳ���
#define PI 3.14


int main()
{
    int k = 3;
    //c++�еĳ���
    const int n = k;
    int* pN = (int*)&n;
    //n = 1;
    *pN = 2;

    printf("const int n = %d\r\n", n);
     

    return 0;
}

