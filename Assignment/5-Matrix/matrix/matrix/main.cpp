//
//  main.cpp
//  matrix
//
//  Created by Mike on 16/5/13.
//  Copyright © 2016年 陈俊达. All rights reserved.
//

#include <iostream>

//为了增加可读性，
//就没有把将遮两个函数装到Matrix.h,Matrix.cpp里面
//并且将Matrix变成了全局变量

double **allocMatrix(int n);
void releaseMatrix(double **m);

int sz = 3;//Run time is

int main(int argc, const char * argv[]) {
    double **Matrix;
    Matrix = allocMatrix(sz);
    releaseMatrix(Matrix);
    return 0;
}

double **allocMatrix(int n){
    sz = n;
    double **matrix = new double*[n];
    for (int i = 0; i<n; i++) {
        matrix[i] = new double[n];
    }
    for (int i = 0; i<n; i++) {
        for (int j=0; j<n; j++) {
            matrix[i][j] = 1.45;
        }
    }
#if DEBUG
    for (int i = 0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%f\t",matrix[i][j]);
        }
        printf("\n");
    }
#endif
    return matrix;
}

void releaseMatrix(double **m){
    for (int i = 0; i<sz; i++) {
        delete[] m[i];
        m[i] = nullptr;
    }
    delete []m; //???how can I know a run-time size of Matrix?
}