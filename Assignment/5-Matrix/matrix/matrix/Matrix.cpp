/************************************************
 *  Matrix.cpp
 *  matrix
 *
 *  ___DESCRIPSION___
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

#include "Matrix.h"

void printMatrix(double **matrix , int n ){
    for (int i = 0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%f\t",matrix[i][j]);
        }
        printf("\n");
    }
}

double **allocMatrix(int n){
    sz = n;
    double **matrix = new double*[n+1];
    
    for (int i = 0; i<n; i++) {
        matrix[i] = new double[n];
    }
    matrix[n] = nullptr;
    
    for (int i = 0; i<n; i++) {
        for (int j=0; j<n; j++) {
            matrix[i][j] = 0.00;
        }
    }
    return matrix;
}

void releaseMatrixWithStander(double **m){
    
    for (int i = 0; m[i] != nullptr ; i++) {
        delete[] m[i];
        m[i] = nullptr;
    }
    delete []m; //???how can I know a run-time size of Matrix?
    m = nullptr;
}


void releaseMatrix(double **m){
    for (int i = 0; i<sz; i++) {
        delete[] m[i];
        m[i] = nullptr;
    }
    delete []m; //???how can I know a run-time size of Matrix?
    m = nullptr;
}
