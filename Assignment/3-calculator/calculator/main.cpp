//
//  main.cpp
//  calculator
//
//  Created by Mike on 16/3/9.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

//If we input "calculator div 1.1 2.2" in command line, we will see the result 0.5.


#include <iostream>
#include <cmath>
#include <unistd.h>
#include "Calculator.hpp"
using namespace std;

int main(int argc, const char* argv[]){
    if(argc!=4){
        cout << "You must give 4 arguments!" << endl;
        return 1;
    }
    
    double op1 = 0 ,op2 = 0;
    char opcode[3];
    strcpy(opcode, argv[1]);
    op1 = atof(argv[2]);
    op2 = atof(argv[3]);
    
    Calculator one(op1,op2,opcode);
    std::cout << one.doOperation() << std::endl;
    //另一种合理的设置方式是将错误处理放在main函数里，doOperation返回错误代码.但是在这个代码里面就显得不太可能。
    return  0;
}