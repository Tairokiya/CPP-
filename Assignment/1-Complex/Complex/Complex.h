//
//  Complex.hpp
//  Complex
//
//  Created by Mike on 16/3/8.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#ifndef Complex_h
#define Complex_h

#include <iostream>  //include
// <> 库 .framework .lib
// "" 自定义


class Complex{
    
private:
    double real = 0;
    double image = 0;
    
public:
    Complex();
//  Complex() = default; // C11标准
    Complex(double r,double i);
    Complex operator=(const std::string str);
    
    double greal(); // getter
    double gimage();
    
    void setValue(double r,double i); // setter
    void addValue(double r,double i); // a=a+b
    void multiply(double r,double i); // a=a*b
    void displayMessage();
    
};

//constexpr C++11中可以支持虚数的识别
//  Complex a = 3+4i ;
//constexpr Complex::Complex operator"" i(double img) {
//    return Complex(0.0,img);
//}


#endif /* Complex_h */
