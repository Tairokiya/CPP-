/************************************************
 *  Readme.h
 *  jun1st
 *
 *  ___DESCRIPSION___
 *
 *  Created by Mike on 16/6/1.
 *   Copyright © 2016年 陈俊达. All rights reserved.
 ************************************************/

#ifndef Readme_h
#define Readme_h


浅拷贝，深拷贝：
- 如果是浅拷贝，在某一个对象销毁的时候这个存储空间就没有了；总有一点会发生多次delete

公有继承（缺省），保护继承，私有继承：
- 公有继承 public       hieracracy  :public,protected,hidden
- 保护继承 protected    hieracracy  :protected,protected,hidden
- 私有继承 private      hieracracy  :private,private,hidden

const function:常函数，只读不写，只有常const object可以访问
const object : 常对象 只能调用常函数

virtual function
A *p; B b; p = &b; p->print();//print 的哪一个版本？
--没有定义virtual: A::print();
--   定义virtual: B::print();
指针可能拥有两种数据类型:(指向对象)[出生地与生活地]
--> static  type:  A*
--> dynamic type:  B*
dynamic bonding : 动态联编，动态绑定(动态绑定函数的入口地址)(与静态联编相对)
virtual function chart : 虚函数表

> C++中的虚函数的作用主要是实现了多态的机制。关于多态，简而言之就是用父类型别的指针指向其子类的实例，然后通过父类的指针调用实际子类的成员函数。这种技术可以让父类的指针有“多种形态”，这是一种泛型技术。所谓泛型技术，说白了就是试图使用不变的代码来实现可变的算法。比如：模板技术，RTTI技术，虚函数技术，要么是试图做到在编译时决议，要么试图做到运行时决议。

Effective C++ 不建议试用protected，会破坏derive的情况




OOP = Encapsulation + Inheritance + Plymorphism

Polymorchipsm:
- overload 重载
+ override 覆盖 => between virtual functions

dynamic_cast
typeid,typename,typeof //<typeinfo>
virtual function
virtual destructor:定义了virtual所以会去Derive找destructor

#include <virtualDestructor.h>
The output of running the code above would be:

Constructing Base
Constructing Derive
// But no Derive Destructor was called
Destroying Base

子类里面对基类函数重载，如果基类函数写了virtual,那么子类的同签名函数必为重载函数

虚指针，虚函数表: vptr,vtable( Constructed as class owning virtual function )
只有指针访问，虚函数才是动态联编，动态决定；如果this指针访问则依然是静态联编


Abstract class: 某些成员是未决定的 [concret class]
pure virtual function : 纯虚函数
可以生成指向这个对象的指针
Shape *p; //[后面可以指向各种派生类对象的指针]
p = new Square;     p->draw();
p = new Circle;     p->draw();
p = new Triangle;   p->draw();
好处: 只需要写draw()即可


(写在头文件里)
模板类 类模板 class template
模板函数 函数模板 function template : 显示实例化，或者参数推演实例化
template <class T, int len> class Array//...
Array<int, 3> intArray; //这里不可以将3替换成某个变量：必须写字面常量，在compiler中生成




#endif /* Readme_h */
