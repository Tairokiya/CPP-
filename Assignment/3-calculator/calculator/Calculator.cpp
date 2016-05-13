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
    int error;
    std::string errorstr;
    double res = doOperationHidden(error);
    
    if (error) {
        switch (error) {
        case 2:
            errorstr = "Dividend equals to zero";
            break;
        case 1:
            errorstr = "Error unexpected";
            break;
        default:
            break;
    }
        std::cout << errorstr << std::endl;
        return 1;
    }
    
    return res;
    
}

double Calculator::doOperationHidden(int &error){
    error = 0;
    bool opZero = (operand2 < 0.00008 && operand2 > -0.00008);
    if (strncmp(operation, "add",3) == 0) {
        return operand1 + operand2;
    }else if(strncmp(operation, "sub",3) == 0){
        return operand1 - operand2;
    }else if (strncmp(operation, "mul",3) == 0){
        return operand1 * operand2;
    }else if (strncmp(operation, "div",3) == 0){
        if (opZero) {
            error = 2;
            return NULL;
        }
        return operand1 / operand2;
    }
    error = 1;
    return NULL;
    
    
//    //作为备用，防止输入的错误
//    switch (*operation) {
//        case 'a':
//            return operand1 + operand2;
//        case 's':
//            return operand1 - operand2;
//        case 'm':
//            return operand1 * operand2;
//        case 'd':
//            return operand1 / operand2;
//        default:
//            std::cout << "Invalid operation!" << std::endl;
//            return 2;
//    }
    
}
