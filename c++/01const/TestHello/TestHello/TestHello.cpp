// TestHello.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


typedef  int BOOL;
#define TRUE 1
#define FALSE 0

//void foo_bool() {
//    bool bRet = true;
//    bRet = false;
//
//    if (bRet) {
//
//    }
//
//    BOOL b = TRUE;
//    b = FALSE;
//
//    int nSize = sizeof(bool);
//    nSize = sizeof(BOOL);
//
//    //while (0)
//    //{
//
//    //}
//}

//const
//����--����

//c�����еĳ���
#define PI 3.14

void foo_const();

//����
//const int nSize = 100;

//ָ�� + const

void mystrcpy(char* pDst,const char* pSrc) {

    //pSrc[0] = 1;

}

const int myFun() {
    int n = 0;
    return n;
}

void foo_const_pointer()
{
    int k = myFun();

    //const char* p = "Hello World!";
    //p = "asdfasdfsadf";

    //char* q = const_cast<char*>(p);
    //char* q = (char*)p;
    //q[0] = 'A';


}


int main()
{
    foo_const_pointer();
    //foo_const();

    //printf("nSize = %d", nSize);
    //char szBuf[nSize];

    //bool b = 1;
    //int k = 3;
    ////c++�еĳ���
    //const int n = k;
    //int* pN = (int*)&n;
    ////n = 1;
    //*pN = 2;

    //printf("const int n = %d\r\n", n);
     

    return 0;
}

