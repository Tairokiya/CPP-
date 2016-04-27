//
//  main.cpp
//  displayInBinary
//
//  Created by Mike on 16/3/8.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#include <iostream>
#include "displayInBinary.hpp"

int main(int argc, const char * argv[]) {
    char charr = 'a';
    displayBinary(&charr, sizeof(char));
    
    int intt = 39403;
    displayBinary(&intt, sizeof(int));
    
    long longg = 23094123;
    displayBinary(&longg, sizeof(long));
    
    double doubble  = 1209359.238;
    displayBinary(&doubble,sizeof(double));
    
}
