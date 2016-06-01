/************************************************
 *  deriveClass.cpp
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

#include "deriveClass.h"

void deriveClass(){
    //Construct with array
    BaseMK a[1];
    cout << a[0].catagory() << endl << endl;
    //    BaseMK *pbase = new BaseMK[3];//如果在堆上申请，必须有默认的构造函数
    
    
    //Construct on heap
    DeriveMK *qderive = new DeriveMK[3];
    cout << "Derive catagory funx call : " << qderive[2].catagory() << endl;
    cout << "Base catagory funx call : " << qderive[1].BaseMK::catagory() <<endl;
    
    
    //Reference to a private val in class is bad habit!!!
    int &i = qderive[0].myRef();
    cout << "Previous ref is : " << i << endl;
    i = 2015302580;
    cout << "Never return private value !!! " <<endl << qderive[0].myRef() << endl;
    
    
    //When is the static being initialized
    static DeriveMK jderive;
    cout << jderive.catagory() << endl;
    
    //
    BaseMK *baseptr;
    DeriveMK *deriveptr;
    baseptr = deriveptr;
//    deriveptr = baseptr; //Assining to ... from incompatible type ...
    deriveptr = (DeriveMK*) baseptr;
    deriveptr = dynamic_cast<DeriveMK*>(baseptr);

    
    //Deconstructor Mind virtual!!
    //    delete [] pbase;
    delete [] qderive;
    //    delete [] a;
    //    delete a;
}