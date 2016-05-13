//
//  main.cpp
//  string
//
//  Created by Mike on 16/5/12.
//  Copyright © 2016年 陈俊达. All rights reserved.
//


#include <iostream>

using namespace std;

class String{
    static int nCharArray;
    char* str;
    size_t _len;
public:
    String();
    String(const char *p);
    String(const String &s);
    char& operator[](unsigned int idx);
    String& operator=(const String &s);
    ~String();
    const char* c_str(){
        return str+1;
    }
};
int String::nCharArray;




String::String(){
    str=NULL;
    _len=0;
    cout << "in constructor,nCharArray=" << nCharArray << endl;
}

String::String(const char *p){
    _len = strlen(p);
    str = new char[_len+1+1];
    nCharArray++;
    strcpy(str+1,p);
    str[0]=1;
    cout << "in constructor,nCharArray=" << nCharArray << endl;
}

String::String(const String &s){
    str = s.str;
    _len = s._len;
    str[0]++;
    cout << "in constructor,nCharArray=" << nCharArray << endl;
}

char& String::operator[](unsigned int idx){
    if( idx < 0 || idx > _len || str == NULL){
        static char nullchar = 0;
        return nullchar;
    }
    if( str[0] > 1 ){ //str[0]!=0
        char *buf=new char[_len+1+1];
        nCharArray++;
        strcpy(buf+1,str+1);
        str[0]--;
        str=buf;
        str[0]=1;
    }
    cout << "in oprator[],nCharArray=" << nCharArray << endl;
    return str[1+idx];
}

String& String::operator=(const String &s){
    if(!str){
        _len=s._len;
        str=s.str;
        s.str[0]++;
    }
    else{
        str[0]--;
        if(!str[0]){
            delete[] str;
            nCharArray--;
        }
        _len=s._len;
        str=s.str;
        str[0]++;
    }
    cout << "in operator=,nCharArray=" << nCharArray << endl;
    return *this;
}

String::~String(){
    if(str){
        str[0]--;
        if(!str[0]){
            delete[] str;
            nCharArray--;
        }
    }
    cout << "in destructor,nCharArray=" << nCharArray << endl;
}

int main(){
    
    /*******************************************
     *  Output:
     *
     *
     *        in constructor,nCharArray=0   //string s1 NULL
     *        in constructor,nCharArray=1   //string s2 "abc"
     *        in constructor,nCharArray=1   //string s3
     *        in oprator[],nCharArray=2
     *        abc
     *        pbc
     *        in operator=,nCharArray=2
     *        in operator=,nCharArray=1
     *        pbc
     *        pbc
     *        in destructor,nCharArray=1
     *        in destructor,nCharArray=1
     *        in destructor,nCharArray=0
     *
     *
     *
     *******************************************/
    
    
    String s1;  // nArrayChar = 0
    const char *p = "abc";
    String s2(p); // nArrayChar = 1
    String s3 = s2; // nArrayChar = 1(没有更新)
    s3[0] = 'p'; // nArrayChar = 2
    
    cout << s2.c_str() << endl;
    cout << s3.c_str() << endl;
    
    s1=s3;
    s2=s3;
    
    cout << s1.c_str() << endl;
    cout << s2.c_str() << endl;
    
}
