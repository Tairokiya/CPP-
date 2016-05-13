//
//  main.cpp
//  for_loop
//
//  Created by Mike on 16/5/12.
//  Copyright © 2016年 陈俊达. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    static int count = -1;
    
    //0.Using break
#define QUIT_MY_LOOP {if(i_wanna_quit){break;}}
    bool i_wanna_quit = false;
    for(int i=0;i<100;i++){
        QUIT_MY_LOOP;
        for(int j=0;j<100;j++){
            QUIT_MY_LOOP;
            for(int k=0;k<100;k++){
                if( (i+j+k)%255==0 && (i+j+k) != 0 ){
                    i_wanna_quit = true;
                    QUIT_MY_LOOP;
                }
            }
        }
    }
    std::cout << "Break " << ++count << " times."<< std::endl;
    
    //1.Another kind of break (same as 0.)
    for(int i=0;i<100;i++){
        bool quit = false;
        if (quit) break;
        for(int j=0;j<100 && !quit;j++){
            for(int k=0;k<100 && !quit;k++){
                if( (i+j+k)%255==0 && (i+j+k) != 0 ){
                    quit = true;
                }
            }
        }
    }
    std::cout << "Break " << ++count << " times."<< std::endl;
    
    //2.exit by goto
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            for(int k=0;k<100;k++){
                if( (i+j+k)%255==0 && (i+j+k) != 0 ){
                    goto exit_by_goto;
                }
            }
        }
    }
exit_by_goto:
    
    std::cout << "Break " << ++count << " times."<< std::endl;
    
    //3.keepLooping until I set one val negative and quit as a signal
    {
#define keepLooping (i<0)
        int i,j,k;
        
    for(i=0;i<100 && keepLooping ;i++){
        for(j=0;j<100 && keepLooping;j++){
            for( k=0;k<100 && keepLooping;k++){
                if( (i+j+k)%255==0 && (i+j+k) != 0 ){
                    i = -5; //just a random negative integer
                }
            }
        }
    }

    }
    std::cout << "Break " << ++count << " times."<< std::endl;
    
    //4.exit/return (rude)
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            for(int k=0;k<100;k++){
                if( (i+j+k)%255==0 && (i+j+k) != 0 ){
                    std::cout << "This message means you break with exit/return" << std::endl;
                    exit(EXIT_SUCCESS);
                }
            }
        }
    }
    
    //This sentence is not gonna show at console.
    std::cout << "Break " << ++count << " times."<< std::endl;
    
    
    return 0;
}
