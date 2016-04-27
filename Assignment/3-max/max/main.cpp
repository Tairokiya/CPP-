//
//  main.cpp
//  max
//
//  Created by Mike on 16/3/23.
//  Copyright © 2016年 Mike. All rights reserved.
//

#include <iostream>
#include <cstdarg>

namespace mynamespace {
    int max(int count, ...){
        va_list arg;
        va_start(arg, count);
        int max = va_arg(arg, int);
        int temp = max;
        for (int i = 0; i<count; i++) {
            temp = va_arg(arg, int);
            max = max>temp? max:temp;
        }
        return max;
        
    }
}

int main(int argc, const char * argv[]) {
    std::cout << mynamespace::max(5,1,2,3,6,5)<<std::endl ;
    return 0;
}
