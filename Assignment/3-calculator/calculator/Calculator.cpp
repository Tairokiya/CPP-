//
//  Calculator.cpp
//  calculator
//
//  Created by Mike on 16/3/23.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#include "Calculator.hpp"
#include <cstring>
#include <iostream>
#include <cmath>


Calculator::Calculator(double a, double b, char* op){
    strcpy(operation, op);
    operand1 = a;
    operand2 = b;
}

double Calculator::doOperation(){

    if (strncmp(operation, "add",3) == 0) {
        return operand1 + operand2;
    }else if(strncmp(operation, "sub",3) == 0){
        return operand1 - operand2;
    }else if (strncmp(operation, "mul",3) == 0){
        return operand1 * operand2;
    }else if (strncmp(operation, "div",3) == 0){
        return operand1 / operand2;
    }
    
    //作为备用，防止输入的错误，其实是没有必要的……
    switch (*operation) {
        case 'a':
            return operand1 + operand2;
        case 's':
            return operand1 - operand2;
        case 'm':
            return operand1 * operand2;
        case 'd':
            return operand1 / operand2;
        default:
            std::cout << "Invalid operation!" << std::endl;
            return 2;
    }
    
}
