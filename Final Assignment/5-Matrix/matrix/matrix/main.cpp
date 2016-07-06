/************************************************
 *  Matrix.cpp
 *  matrix
 *
 *  Assignment 5b - Matrix
 *
 *  Created by Mike on 16/6/1.
 *   Copyright © 2016年 陈俊达. All rights reserved.
 ************************************************
 *
 *  陈俊达 # ID = 2015302580244
 *  Ginda Chen #ID = 2015302580244
 *
 *  GitHub: https://github.com/Tairokiya/CPP-/tree/master/Assignment/5-Matrix/matrix/matrix
 *  Email Address : mike307@163.com
 *
 ************************************************/

#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include "Matrix.h"

int main(int argc, const char * argv[]) {
    
    double **Matrix;
    
    //方法一：利用全局变量sz进行alloc和release（见Matrix.h）
    Matrix = allocMatrix(sz);
    printMatrix(Matrix, sz);
    releaseMatrix(Matrix);
    
    //方法二：利用哨兵Matrix[n]终止delete过程从而省略全局变量
    Matrix = allocMatrix(sz);
    printMatrix(Matrix, sz);
    releaseMatrixWithStander(Matrix);//在Matrix后面加入哨兵,从而减少外部变量sz的作用


    return 0;
}
