//
//  Triangle.hpp
//  Triangle
//
//  Created by Mike on 16/3/8.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>

class Triangle{
private:
    
    double a,b,c;
    
public:
    friend class Triangle;
    Triangle();
    Triangle(double,double,double);
    double Area();
    //??
    friend bool operator>(Triangle p,Triangle q){
        return p.Area() > q.Area();
    };
    friend bool operator<(Triangle p,Triangle q){
        return p.Area() < q.Area();
    };
    
};


#endif /* Triangle_hpp */
