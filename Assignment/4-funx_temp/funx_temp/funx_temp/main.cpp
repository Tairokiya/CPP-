//
//  main.cpp
//  funx_temp
//
//  Created by Mike on 16/5/12.
//  Copyright © 2016年 陈俊达. All rights reserved.
//

#include <iostream>
#include <vector>

template <typename T, typename V, typename U>
class Adventurer {
    T mike;
    U tony;
    V jack;
    
public:
    const char* getMikeTypeName(){
        return typeid(T).name();
    }
    
    const char* getTonyTypeName(){
        return typeid(U).name();
    }
    
    const char* getJackTypeName(){
        return typeid(V).name();
    }
};

template <typename T>
int find(T val,T *list,int size){
    for (int i = 0; i < size; i++)
        if (list[i] == val) return i;
    return -1;
}

int main(int argc, const char * argv[]) {
    
    double arr_double[10] = {0,1,2,3,4,5,6,7,8,9};
    std::cout <<"The result of template function with typename " << typeid(double).name() <<" find is : " << find(8.0, arr_double, 10) << std::endl;

    Adventurer< int , double , float > me;
    printf("%s\n%s\n%s\n",me.getJackTypeName(),me.getMikeTypeName(),me.getTonyTypeName());
    
    //This is not available because 8 is integer
    //std::cout << find(8, arr_double, 10) << std::endl;

    return 0;
}


