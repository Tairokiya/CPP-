//
//  displayInBinary.cpp
//  displayInBinary
//
//  Created by Mike on 16/3/8.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#include "displayInBinary.hpp"

#include <iostream>
using std::cout;

void displayBinary(void * data, int size){
    char *a = (char *)data;
    unsigned char t = 0x80 ;
    for (int i = 0; i < size; i++) {
        t = 0x80; // 1000 0000
        for (int j = 0; j < 8; j++) {
            printf("%d",(*a&t)?1:0);
            t >>= 1;
        }
        a++;printf(" ");
    }
    printf("\n");
}

