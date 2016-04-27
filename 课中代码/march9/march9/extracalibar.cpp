//
//  extracalibar.cpp
//  march9
//
//  Created by Mike on 16/3/9.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#include "extracalibar.hpp"

#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif

using namespace std;

extern int global = 9;

int f(int x) {return x; }// in this sense, return is a assignment expr.
int&g (int x) {
    cout << x<< endl;
    return x;
}

void sizeof_datatypes(){
    
    int i = INT_MAX;
    i = 9;
    int j = sizeof(i++);
    //The expression i++ is ignored
    //The complier only cares about the data type of the expression
    cout << j << endl;
    //Pay attention to runtime and compile time operation
    cout << i << endl;
    //While run-time compling, the i++ is replaced into (int) and the sizeof(int) is compiled into 4 by the complier;
    
    // + - * / are run-time operators
    // They have their own privalige --- Reverse Pollan Expression
    
    float b[10];
    wchar_t * wcptr;
    
    size_t a[100] = {
        sizeof(char),
        // char = 1
        sizeof(unsigned char),
        // unsigned char = 1
        sizeof(int),
        // int = 4
        sizeof(unsigned int),
        // unsigned int = 4
        sizeof(float),
        // float = 4
        
        sizeof(double),
        // double = 8
        sizeof(bool),
        // bool = 1
        sizeof((5+2)==0),
        // bool = 1
        sizeof(cout),
        // cout = 160
        sizeof(cin),
        // cin = 168
        
        sizeof(a),
        // size_t a[100] = 800 = 8 * 100
        sizeof(b),
        // float  b[40]  = 40  = 4 * 10
        // invalid  sizeof(void)
        sizeof(wcptr)
        
        
    };
    cout <<endl;
    for (int i = 0 ; i < sizeof(a)/sizeof(size_t)/5; i++) {
        cout << a[i] << "\t";
        if((i+1) % 5 == 0){
            cout << endl;
        }
    }
    
}



void referenceAndConst(){
    // Value and Address
    // a = ( b = c ) <=> a = &b
    // When we assign valuables like this,
    // pay attention to the return type: value or address
    int a,b,c;
    a = b = c = 9;
    a = 3;
    b = 4;
    printf("%d %d %d\n\n",a,b,c);
    
    // Right Value ,Left Value
    // f(x) = y;
    // reject by compiler, because the temp vauable is not accessible
    // where int f(x) {return x+2;}
    // x is sent into callee -- f,
    // then i+1 is sent back to a temp variable in caller func -- main
    
    int x = 5;int y = 9;
    int &ri = x;    // alias
    ri = 8;
    //f(x) = 7;
    //g(x) = 8;
    //cout << "The reference function of g(3)= 8 is "<< (g(x) = y) << endl;
    //?? why it is;
    
    //Java引用 vs CPP引用
    //引用可以动态绑定，但是CPP中的引用一旦声明就不可以改变
    //创建引用的时候必须和原来的变量绑定在一起
    
    const int number = 7 ; // must assign with a literal val
    // const int number; is illegal;
    // in a scope, the not-def val is random
    
    //OOP OOD OOA ....
}
