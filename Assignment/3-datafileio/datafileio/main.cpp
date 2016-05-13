//
//  main.cpp
//  datafileio
//
//  Created by Mike on 16/3/9.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <unistd.h>
#include <sys/stat.h>
using namespace std;

inline void leapyear(int64_t year, ofstream & output){
    if ((year%4==0 && year%100!=0) || year%400==0){
        output << year << " is a leap year." << endl;
    }else{
        output << year << " is not a leap year." << endl;
    }
}

inline int64_t getNextNumber(ifstream &input){
    char ch = 0; char year[100] = {0};
    int i = 0;
    while ( input.get(ch) && isnumber(ch)) {
            year[i] = ch; i++;
    }
    year[i] = 0;
    return atoll(year);
}


int main(){
    
    system("pwd");
    ifstream input; input.open("./input.in");
    ofstream output; output.open("./output.txt");
    
    while (!input.std::__1::ios_base::eof()) {
        leapyear(getNextNumber(input), output);
    }
    
    return 0;
}