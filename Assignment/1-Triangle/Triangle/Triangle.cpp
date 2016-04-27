//
//  Triangle.cpp
//  Triangle
//
//  Created by Mike on 16/3/8.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#include "Triangle.hpp"
#include <math.h>


Triangle::Triangle(){
    a = b = c = 0.0;
}

Triangle::Triangle(double ta, double tb = 0.0,double tc = 0.0){
    a = ta;
    b = tb;
    c = tc;
}

double Triangle::Area(){
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

