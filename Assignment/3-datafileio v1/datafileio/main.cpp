//
//  main.cpp
//  datafileio
//
//  Created by Mike on 16/3/9.
//  Copyright © 2016年 陈 俊达. All rights reserved.
//

#include <iostream>
#include <unistd.h>
using std::cout;
using std::cin;
using std::endl;

int main(){
    system("pwd");
    int year = NULL;
    FILE *f = fopen("./2014.txt", "r");
    FILE *r = fopen("result.txt", "w+");
    char buf[100] = {'0'};
    fread(buf, 100, 100, f);
    year = atoi(buf);
    
    if  ( (year%4==0 && year%100!=0) || year%400==0){
        cout<<year<<" is a leap year"<<endl;
        sprintf(buf, "%d is a leap year\n",year);
        fwrite(buf, 100, 100, r);
        
    }
    else{
        cout<< year<<" is not a leap year"<<endl;
        sprintf(buf, "%d is not a leap year\n",year);
        fwrite(buf, strlen(buf), strlen(buf), r);
    }
    
#if DEBUG
    fseek(r, 0, 0);
    fread(buf, 100, 100, r);
    cout << buf << endl;
#endif
    
    fclose(f);
    fclose(r);
    return 0;
}