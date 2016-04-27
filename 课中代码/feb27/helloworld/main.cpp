//
//  main.cpp
//
//	test1() : 展示operator的前缀、中缀、后缀表达
//	test2() : 显式强制转换
//	test3() : 初始化与赋值，指针与引用，const
//  test4() : 内存空间的申请与释放，栈(stack)与堆(heap)
//  test5() : 地址的访问
//
//  Created by Mike on 16/3/2.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <type_traits>

void test2();
using namespace std;

int main(int argc, const char * argv[]) {
    
//    cout.precision(4);
//    cout << 1000.999 << endl ;
//    cout << 19.9009 << endl;
    test2();
    
}



void test1(){
    cerr << "The result of cerr output : Error is" << endl;
    
    //operator<< 前缀表达
    operator<<(cout, "The result of operator<<(cout,10) is:");
    operator<<(cout, "10");
    operator<<(cout,"\n");
    
    //operator<< 中缀表达
    cout << "The result of +(10,20) is : " << +(10,20) << endl;
    
}

void test2(){
    // *_cast强制类型转换
    //    static_cast<float>(1+4)
    //    const_cast<<#type#>>(<#expression#>)
    //    dynamic_cast<<#type#>>(<#expression#>)
    //    reinterpret_cast<<#type#>>(<#expression#>)
    string p;
    cout << sizeof(string) << endl;
    string q = *new string();
    string *t;
    cout << sizeof(string*) << endl;

    cout << "The result of static_cast<int>('A') : " <<static_cast<float>('A') << endl;
    //cout << "The result of static_cast<int>('A') : " <<dynamic_cast<string *>(p) << endl;

}

void test3(){
    
    //对于built-in初始化的过程比较接近赋值
    
    int i = 1;
    i += 3;
    
    int *p = &i;
    *p = 4;
    
    const int *q = &i;
    int j = 8;
    q = &j;
    
    //引用
    int &r = i;
    r = 13;
    
    //对于对象来说，初始化是调用构造函数的过程
    
    
}


void test4(){
    //Stack:有名字的变量
    //Heap:没有名字的变量
    
    int *p; //储存在栈中
    p = new int; //new:在堆中开辟一部分内存，p指向这一部分内存的（首）地址
    
    cout << p << " is " << (*p = 3) << endl;
    
    float k = 19.8823;
    cout.precision(4) ;
    cout << k << endl;
    
    //delete
    delete p;
    
    //?What will happen?
    p = nullptr ;
    delete p;
}


void test5(){
    //直接访问 direct access
    int i = 5;
    cout <<"&i = " << &i << endl;
    
    //间接访问 indirect access
    int j = 9;
    cout <<"&j = " << &j << endl;
    
    //机器是向上访问的？
    int k = 100;
    cout <<"&k = " << &k << endl;
    
    int *p = &i;
    
    printf("\nAdress \t\t\t value\n");
    printf("%p \t %d\twhich is k\n",p-2,*(p-2));
    printf("%p \t %d\t\twhich is j\n",p-1,*(p-1));
    printf("%p \t %d\t\twhich is i\n",p,*(p));
}

