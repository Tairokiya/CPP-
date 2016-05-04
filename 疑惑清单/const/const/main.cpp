//
//  main.cpp
//  const
//
//  Created by Mike on 16/4/6.
//  Copyright © 2016年 Mike. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    //常量指针与指向常量的指针
    int t1 = 99;
    int t2 = 88;
    
    const int *p1 = &t1 ;//
    p1 = &t2;
    //*p1 = t2;
    
    int *const p2 = &t1 ;
    //p2 = &t1;
    *p2 = t1;
    
    const int t3 = 77;
    const int *const p3 = &t3;
    //int *const p4 = &t3;
    
    const char a = 'a';
    const char *const ap = &a;
    
    
    //常量引用
    int i = 42;
    const int &r1 = i*2 ;
    const int &r2 = 20;
//    int &r4 = r1 *2 ;
    
    
    char line[10];
    cin.getline(line, 60, '\n');
    //string line2;
    //cin.getline(line2, 60, '\n');
    
    
    int n = 0;
    //string str[n];
    
    
    int arr[10];
    int (&arr1)[10] = arr;

    int *arr2[10];
    int *(&arr3)[10] = arr2;
    int (*arr4)[10] = &arr2;
    
    
    
    
    
    return 0;
}
