//
//  main.cpp
//  apr27
//
//  Created by Mike on 16/4/27.
//  Copyright © 2016年 陈俊达. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

template <class T>
T maximum (T a, T b, T c) ;

template <class T>
T minimun (T a, T b, T c) {return a;} ;

int templateClass(int argc, const char * argv[]) {
    cout << minimun(1, 2, 3);
    //minimun是不会出现问题的：函数体和函数声明放在一起，对于T的实现非常简洁
    //触发模板进行实例化
    
    cout << maximum(1, 2, 3);
    //maximum
    //在link的过程中出现问题：非静态成员变量模板无法实例化
    //编译器无法找到maximum函数的定义，所以吐核
    
    /*
     Undefined symbols for architecture x86_64:
     "int maximum<int>(int, int, int)", referenced from:
     _main in main.o
     ld: symbol(s) not found for architecture x86_64
     clang: error: linker command failed with exit code 1 (use -v to see invocation)
     */
    
    //分离编译: x.o y.o
    //
    //无法定义T的大小
    
    return 0;
}

