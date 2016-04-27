//
//  extracalibar.hpp
//  march9
//
//  Created by Mike on 16/3/9.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#ifndef extracalibar_hpp
#define extracalibar_hpp

#include <iostream>
#include <string>
using namespace std;

extern int global;
void sizeof_datatypes();
void referenceAndConst();
int&g (int x);



// class = struct + func
// Don't write struct in C++,
/*
    Default access mode
    struct - public
    class -- private
    protected
 */

struct calibar_stru{
    int publicval;
private:
    int privateval;
};

class calibar {
    
    // member var - default private
    int power = 0;
    int _level = 1;
    
public:
    // method: member func
    //int extra_calibar();
    void display(string nameofcourse){
        //传递object
        cout << "This is an object, it has a copy : " << nameofcourse <<endl;
    }
    void display_const_ref(const string &nameofcourse){
        //传递reference
        //Best Practice: -> CONST是准备给compiler的,防止自己/编译器在不知觉的时候修改数据
        //If you can use CONST
        //please use CONST
        cout << "This is a const-reference, it is itself but can't be modified: " << nameofcourse <<endl;
    }
    
    void setter_power(int newpower){
        power = newpower;
    }
    int getter_power(){
        return power;
    }
    
    void setlevel(int newlevel){
        _level = newlevel;
    }
    int getlevel(){
        return _level;
    }
    void display_getlevel(){
        cout << "Your current level is : " << _level << endl;
    }
    
    
    
    
    //interface:类上的公有成员/成员函数（成员变量一定是私有的，通常而言……）
    
};

//Local Variable
//Attributes








#endif /* extracalibar_hpp */
