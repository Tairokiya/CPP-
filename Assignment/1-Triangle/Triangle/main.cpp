//
//  main.cpp
//  Triangle
//
//  Created by Mike on 16/3/8.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#include <iostream>
#include "Triangle.hpp"
using namespace::std;

int main(int argc, const char * argv[]) {
    Triangle eucilid(5,12,13);
    Triangle pythagoras(3,4,5);
    cout << "The area of Eucilid is " << eucilid.Area() << endl;
    cout << "The area of Pitacolas is " << pythagoras.Area() << endl;
    
    if (pythagoras>eucilid) {
        cout << "Pythagoras is better than his student Eucilid" << endl;
    }else{
        cout << "Eucilid is more extraordinary than his mentor Pythagoras"<<endl;
    }
    
    return 0;
}
