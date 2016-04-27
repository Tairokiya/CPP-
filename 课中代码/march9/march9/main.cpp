//
//  main.cpp
//  march9
//
//  Created by Mike on 16/3/9.
//  Copyright © 2016年 陈 俊达. All rights reserved.

#include <iostream>
#include <string>
#include "extracalibar.hpp"
using namespace std;


void sizeof_datatypes();

int &h(int& x){
    return x;
}

int &j(int j){
    return j;
}

int &k(int x) {
    cout << x<< endl;
    return x;
}


int main(int argc, const char * argv[]) {
    

    
    int ia, ib, ic;
    ia = ib = ic;
    //ia = &ib;
    
    
    int x = 5;
    int y = 79;
    int z1 = 6;
    int z2 = 5;
    cout << "The reference function of g(5)= 79 is "<< (h(x) = y) << endl;
    cout << "The reference function of j(5)= 6 is "<< (j(z2) = z1) << endl;

    // sizeof_datatypes();
    
    
    extern int global;
    cout << "" << global << endl;
    
    //extern variable: outside the scope
    //extern func: outside the class
    //in order to determine the address
    
    //static vs global variable
    
    calibar a = *new calibar;
    cout << sizeof(calibar) << endl;
    cout << sizeof(a) << endl;
    
    calibar b;
    cout << sizeof(b) << endl;
    
    calibar *c;
    cout << sizeof(c) << endl;
    
    string str1 = "pop mum is going to school. Why is sizeof function not increase?"; // "pop mum" (char *) 字符变量的地址类型
    cout << sizeof(string) << endl;
    cout << sizeof(str1) << endl;
    cout << str1 << endl;
    
    char ca[] = "abcd\0\0\0\0\0"; // \0是一个八进制的数字
    cout << sizeof(ca) << endl;
    
    
    
    //calibar cdd = {a,b,c...} 这样初始化是不安全的，毕竟里面有这么多私有对象
    
    return 0;
}



