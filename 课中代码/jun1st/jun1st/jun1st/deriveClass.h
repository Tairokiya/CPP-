/************************************************
 *  deriveClass.h
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

#ifndef deriveClass_h
#define deriveClass_h

#include <stdio.h>
#include <iostream>
using namespace std;

static int countConstructorBaseMK;
static int countConstructorDeriveMK;


class BaseMK{
private:
    int var = 1;
    const char * str = "BaseMK";
    int badRef = 400;
public:
    
    
    //构造函数和析构函数是编译器自动调用的接口函数。
    //构造函数可以重载，但析构函数不可以重载
    BaseMK (){
        var = 1;
        cout << "Base Constructor called : " << ++countConstructorBaseMK<< endl;
    }
    
    BaseMK ( BaseMK &b ){
        this->var = b.var +30;
        cout << "Base copy constructor called." << endl;
    }
    
    virtual int& myRef(){
        return badRef;
    }
    
    virtual int myVar(){ //return by reference or value?
        return var;
    }
    
    virtual const char * catagory(){
        return str;
    }
    
    ~BaseMK(){
        cout << "Base Destructor called : " << --countConstructorBaseMK << endl;
    }
    
};

class DeriveMK : public BaseMK {
    int var = 30;
    const char * str = "DeriveMK";
    
public:
    DeriveMK (){
        var = 30;
        cout << "Derive Constructor called : " << ++countConstructorDeriveMK<< endl;
    }
    
    DeriveMK ( DeriveMK &d ){
        this->var = d.var + 9090;
        cout << "Derive MK Copy Constructor Called." << endl;
    }
    
    virtual const char * catagory(){
        return str;
    }
    
    virtual DeriveMK* myObject(){
        return this;
    }
    
    virtual int myVar(){ //return by reference or value?
        return var;
    }
    
    ~DeriveMK(){
        cout << "Derive Destructor called : " << --countConstructorDeriveMK << endl;
    }
};




#endif /* deriveClass_h */
