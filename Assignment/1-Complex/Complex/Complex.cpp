//
//  Complex.cpp
//  Complex
//
//  Created by Mike on 16/3/8.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#include "Complex.h"

class Complex;

Complex::Complex()
{
    real  = 0.0;
    image = 0.0;
}

Complex::Complex(double r,double i)
{
    real = r;
    image = i;
}

double Complex::gimage(){
    return image;
}

double Complex::greal(){
    return real;
}

void Complex::setValue(double r,double i)
{
    real = r;
    image = i;
}

void Complex::addValue(double r,double i)
{
    real += r; // real = real + r;
    image += i;
}

void Complex::multiply(double r,double i){
    double realtmp = real;
    real =  real*r - image*i;
    image = realtmp*i + image*r;
}

void Complex::displayMessage(){
    if (real == 0.0 && image == 0.0){
        printf("0\n");
    }else if(real == 0){
        printf("%.1fi\n",image);
    }else if(image == 0){
        printf("%.1f\n",real);
    }else{
        printf("%.1f%+.1fi\n",real,image);
    }
}



