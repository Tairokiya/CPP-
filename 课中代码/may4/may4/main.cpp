//
//  main.cpp
//  may4th
//
//  Created by Mike on 16/5/4.
//  Copyright © 2016年 陈俊达. All rights reserved.
//


#include <iostream>
using namespace std;

//  void referenceConstformer( const int &a )   { a = 1;}
    void referenceConstLatter( int &a )         { a = 2;}
//  int  referenceOfIntegerArray( int & b[] );
//  会失败，&不可以传递

// 指针：取内容时必须有显示的解引用的操作
// 引用：引用变量代表被引用的东西，引用不可以独立传递
/*
 在C++中引用不可以变化，但是Java的引用可以变化，所以可以传递
 */

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout << "Hello, World!\n";
    std::cout << "Hello, World!\n";
    std::cout << "Hello, World!\n";


    
    
    
//    char a = 'a' ;
//    a + 1; // int
//    cout << sizeof(a + 1) << endl; //
//    
//    int i = 2;
//    &i; // int *
//    
//    int *p;
//    &p; // int **
    
    return 0;
}
