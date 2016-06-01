/************************************************
 *  Matrix.h
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

#ifndef Matrix_h
#define Matrix_h

#include <stdio.h>

static int sz = 10; // Matrix size

double **allocMatrix(int );
void releaseMatrix(double**);
void printMatrix(double** , int  );
void releaseMatrixWithStander(double**);


#endif /* Matrix_h */
