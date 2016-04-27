#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    cout << ( 1 and 2 ) << endl;
    return 0;
}


int fux1()
{
    vector<int> vec;
    vec.push_back( 10 );
    vec.push_back( 20 );
    
    for (int &i : vec ){
        cout << i;
    }

    cout << endl;
    
    map<string, string> address_book;
    address_book[ "Alex" ] = "webmaster@cprogramming.com";
    // add a bunch of people to address_book
    
    for (auto itr = address_book.begin(); itr != address_book.end(); itr++) {
        ;//原始内容应该怎么写？
    }
    for ( auto address_entry : address_book )
    {
        // what is address_entry? iterator
        cout  << address_entry.first << " < " << address_entry.second << ">" <<endl;
    }
    
    
    
    
    
    
    //auto,register,extern,mutable,static,const
    
    
    
}