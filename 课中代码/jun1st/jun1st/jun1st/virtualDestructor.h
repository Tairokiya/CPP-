/************************************************
 *  virtualDestructor.h
 *  jun1st
 *
 *  ___DESCRIPSION___
 *
 *  Created by Mike on 16/6/1.
 *   Copyright © 2016年 陈俊达. All rights reserved.
 ************************************************
 * 
 *  陈俊达 # ID = 2015302580244
 *  Ginda Chen #ID = 2015302580244
 *  
 *  GitHub: https://github.com/Tairokiya/jun1st
 *  Email Address : mike307@163.com
 *  
 ************************************************/ 

#ifndef virtualDestructor_h
#define virtualDestructor_h

#include <stdio.h>
#include <iostream>
using namespace std;

class Base{
public:
    Base(){ cout<<"Constructing Base";}
    ~Base(){ cout<<"Destroying Base";}
    //    virtual ~Base(){ cout<<"Destroying Base";} //If it is not defined...
};

class Derive: public Base{
public:
    Derive(){ cout<<"Constructing Derive";}
    ~Derive(){ cout<<"Destroying Derive";}
};



#endif /* virtualDestructor_h */
