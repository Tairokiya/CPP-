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
    cout << one.doOperation() << endl;
    return  0;
}