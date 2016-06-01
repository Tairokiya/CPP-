/************************************************
 *  virtualDestructor.cpp
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

#include "virtualDestructor.h"


void virtualDestructor(){
    Base *basePtr = new Derive();
    delete basePtr;
}