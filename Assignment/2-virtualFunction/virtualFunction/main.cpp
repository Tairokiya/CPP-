#include <iostream>
using namespace std;

class shape{
public:
    //虚函数draw在shape上等待下面的类进行覆盖
    virtual void draw(){
        cout << "can not draw a general shape!"<<endl<<endl;
    }
};

class triangle:public shape{
public:
    virtual void draw(){
        cout << "  *  "<<endl;
        cout << " * * "<<endl;
        cout << "*****"<<endl<<endl;
    }
};

class rectangle:public shape{
public:
    virtual void draw(){
        cout << "*******"<<endl;
        cout << "*     *"<<endl;
        cout << "*******"<<endl<<endl;
    }
};

class square:public rectangle, public triangle{
public:
    void draw(){
        cout << "****"<<endl;
        cout << "*  *"<<endl;
        cout << "****"<<endl<<endl;
    }
};
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
//
// 1.What is the output? Is that the same as you imagin?
// Well, yes!
//
// 2.If we delete the keyword virtual in base class shape,what is the output?
// A group will success because they're defined natually as the instance of its own class;
// B group and C group will all fail.
// Because they firstly scan the Base-Class Shape, by which time, without virtual modifier to func draw(), they will not check the actuall class-type [c,t,r].
// Thus, they directly call the matched funx draw in class Shape.
//
// 3.Outline the usage of virtual function in your words.
// Give a chance for the sub-class to override the virtual function body.
//
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////


int main(int argc, char *argv[]){
    
    //A.基类、子类实例的函数调用
    shape c;  triangle t;  rectangle r; square s;
    c.draw(); t.draw();    r.draw();    s.draw();
    
    //B.[指向本类子类实例]指针的函数调用
    shape *p;
    p=&c;   p->draw();
    p=&t;   p->draw();
    p=&r;   p->draw();
//    p=&s;   p->draw();    //error: 不可继承
    
    triangle *pt;
    pt=&s;  pt->draw();
    
    //C.[引用本类子类实例]引用的函数调用
    shape &rc=c;    rc.draw();
    shape &rt=t;    rt.draw();
    shape &rr=r;    rr.draw();
//    shape &rs=s;    rs.draw();    //error: 不可继承
    triangle &rs=s; rs.draw();
    
    
}


