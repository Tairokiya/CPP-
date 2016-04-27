//
//  Calculator.hpp
//  calculator
//
//  Created by Mike on 16/3/23.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#ifndef Calculator_hpp
#define Calculator_hpp

#include <stdio.h>

class Calculator{
    
    double operand1,operand2;
    
    char operation[3] = {0};
    
public:
    
    Calculator(double,double,char*);
    
    double doOperation();
};

#endif /* Calculator_hpp */
