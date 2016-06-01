////
////  main.cpp
////  pointerunix
////
////  Created by Mike on 16/5/19.
////  Copyright © 2016年 陈俊达. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//void fee(char a[]){
//    a++;
//}//按值传递
//
//void fee2(char* a){
//    a++;
//}//按值传递
//
//void fee3(char* &a){
//    a++;
//}//按引用传递
//
////帮助理解按值传递、按引用传递
//void fee(void){
//    char a[3];
//    printf("original a: %p\n",a);
//    fee(a);
//    printf("fee1(a) : %p\n",a);
//    fee2(a);
//    printf("fee2(a) : %p\n",a);
//    char* aa = const_cast<char*>(a);
//    //    fee3(a); //报错: a的数据类型为 char * const
//    fee3(aa);
//    printf("fee3(aa) : %p\n",aa);
//    
//    char *  b = (char*)alloca(sizeof(char)*3);
//    printf("original b: %p\n",b);
//    fee3(b);
//    printf("fee3(b) : %p\n",b);
//}
////#####################################//
//
//size_t measure(char* &p){
//    return sizeof(p);
//}
//
//size_t measure2(char p[]){
//    return sizeof(p);
//    //突显sizeof作为一个操作符在不同栈桢中的作用
//}
//
//void measureSize(){
//    char *p = (char*)alloca(sizeof(char)*3);
//    char q[10];
//    cout << "measure sizeof p in another function : " << measure(p) << endl
//    << "measure2 sizeof p in another function : " << measure2(p) << endl
//    // << "measure sizeof q[10] in another function: "<< measure(q) << endl //error: datatype not match
//    << "measure2 sizeof q[10] in another function : " << measure2(q) << endl;
//}
//
//
//void pointerAddition(){
//    
//    //栈从栈顶生长下来，假定从0x3F开始可以分配空间，首地址为小尾端地址
//    
//    int i = 5;//0x3F ~ 0x3C
//    int j = 6;//0x3B ~ 0x38
//    int *p = &j;// p=&j (0x38)  //64bit : 0x37 ~ 0x30  //32bit : 0x37 ~ 0x34
//    p--; // p = &i (0x3C)  //这里--向上走
//    
//    printf("Adress of i : %p\nAdress of j : %p\nAdress of *p : %p\n",(&i),(&j),(p));
//    printf("sizeof(long) : %ld\n",sizeof(long));
//
//    long pi = (long) (p=&i);
//    long pj = (long) (p=&j);
//    printf("&i - &j = %ld\n",pi-pj);
//    
//}
//
//
//
//int main(int argc, const char * argv[]) {
//    
//    fee(); //按值传递，按引用传递
//    //measureSize(); //sizeof操作符
//    //pointerAddition(); //指针加减法
//    
//
//    
//    return 0;
//}


#include <stdio.h>
#include <iostream>
using namespace std;

void fee1(int a[]){
    a[0] = 100;
    a[2] = 900;
    *(a+4) = 2000;
    
}

void fee2(int *a){
    a[1] = 200;
    a[3] = 1000;
    a[5] = 3000;
    printf("---\n%d\n---\n",a[5]);
}

void fee3(int a){
    a = 300;
}

void fee4(int &a){
    a = 400;
}

int* fee5(){
    int a[10] = {0};
    return a;
}


class Base
{
private:
    int m_nID;
public:
    Base(){m_nID = ClassID();}
    
    // ClassID 返回一个class相关的ID号
    virtual int ClassID() { return 1;}
    
    int GetID() { return m_nID; }
};

class Derived: public Base
{
public:
    Derived(){}
    virtual int ClassID() { return 2;}
};

//int main()
//{
//    Derived cDerived;
//    cout << cDerived.GetID() << endl;
//    return 0;
//}


int main(int argc, char const *argv[])
{
    int a[5] = {0};
    fee1(a);
    fee2(a);
    fee3(a[2]);
    fee4(a[3]);
    
    for (int i = 0; i < 6; ++i)
    {
        printf("%d\n",a[i] );
    }
    
    printf("\n\n");
    
    int *b = fee5();
    for (int i = 0; i < 5; ++i)
    {
        printf("%d\n",b[i] );
    }
    
    
    return 0;
}