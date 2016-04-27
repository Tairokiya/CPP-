//
//  main.cpp
//  Complex
//
//  Created by Mike on 16/3/8.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#import <iostream>
#include "Complex.h"
#include <ccomplex>
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
    
    //Complex类精读全部设置为0.1
    
    Complex a;
    Complex b(8,0);
    Complex c(0,-4);
    Complex d(29.99,88.44);
    cout << "Complex number show" << endl;
    
    a.displayMessage();
    b.displayMessage();
    c.displayMessage();
    d.displayMessage();

    a.setValue(1,2);
    a.addValue(b.greal(),b.gimage());//
    a.displayMessage();
    
    b.multiply(3.2, -4.7);
    b.displayMessage();

    
    
    return 0;
}
