# CPP程序设计作业


国际软件学院
2015302580244
陈俊达
mike307@163.com



#### THE FIRST ASSIGNMENT

   #####(1) **Complex**  
   Write a class named `Complex`, representing a complex number such as `1+3.4i` . You must define two member variables `real` and `image`, and define four member functions:

```C++
void setValue(double r,double i);  
void addValue(double r,double i); // a=a+b
void multiply(double r,double i); // a=a*b
void displayMessage();
```
   Create some objects inside main(), and call all of the four functions to check you implementation.

   #####(2) **Triangle**  
   Define a class `Triangle` like this:

```C++

   class Triangle{
       double a,b,c;
   public:
       Triangle();
       Triangle(double,double,double);
       double Area();
       friend bool operator>(Triangle,Triangle);
   };
```

Put the class definition in a header file( such as `Triangle.h`), and implement it in a source-code file( such as `Triangle.cpp`). In main(), create two objects, calculate the area of them, and compare them with operator () .

   Hint: a Traingle object with larger area will be regarded as "larger object".







---

####THE SECOND ASSIGNMENT  
  #####(1)Display in Binary
**(1)** Write a function `void displayInBinary(void *data,int len) `what will display the binary sequence of a given variable. For example, `char c='a', displayInBinary(&c,sizeof(c))` will output`0110 0001`, and `short n=257,displayInBinary(&n,sizeof(n)) ` will output `0000 0001 0000 0001` , and `float f=1.0f, displayInBinary(&f,sizeof(f))`  will output `0011 1111 1000 0000 0000 0000 0000 0000`.

   Now, please investigate the following function:

```C++
void binaryOut(char c){    
	unsigned char tmp=0x80;
   for(int i=0;i<8;i++){
        if(c&tmp)
            cout << 1;
        else
            cout << 0;
        tmp >>=1;
    }
}
```
    You can implement displayInBinary() by employing binaryOut().

  #####(2)Virtual Function
**(2)** Virtual function is a important concept that will be involed in final examination. Investigate the following program, then answer some questions:

```C++
 #include using namespace std;
class shape{
 public:
  virtual void draw(){
   cout << "can not draw a general shape!"<<endl;
  }
};

class triangle:public shape{
public:
    void draw(){
        cout << "  *  "<<endl;
        cout << " * * "<<endl;
        cout << "*****"<<endl;
    }
};

class rectangle:public shape{

public:
    void draw(){
        cout << "*****"<<endl;
        cout << "*     *"<<endl;
        cout << "*****"<<endl;
    }
};

int main(int argc, char *argv[]){

  shape c;  triangle t;  rectangle r;   shape *p;
  shape &rt=t;   shape &rr=r;
  c.draw();   t.draw();  r.draw();
   p=&c;
   p->draw();   p=&t;   p->draw();
   p=&r;
   p->draw();   rt.draw();   rr.draw();
 }
```
    1.What is the output? Is that the same as you imagin?

    2.If we delete the keyword virtual in base class shape,what is the output?

    3.Outline the usage of virtual function in your words.












---

#### THE THIRD ASSIGNMENT 
  #####(1)max

(1) Write a function whose prototype is:

`   int max(int a,int b,int c);`
   It will pick out the maximum value of three parameters. Place this function in the namespacemynamespace, and call it in main() function in the form `mynamespace::max(...)`.

  #####(2)calculator
(2)Define a class Calculator like this:

```C++
   class Calculator{

       double operand1,operand2;

       char *operation;

   public:

       Calculator(double,double,char*);

       double doOperation();
   };
```

   You must put the class definition in a header file( such as Calculator.h), and implement it in a source-code file( such as Calculator.cpp), and use it to create an object, execute the member function doOperation(), and then display the result in main().

   Hint: the function main() will look like this:
```
int main(int argc,char *argv[]){

	if(argc!=4){
       cout << "You must give 4 arguments!" << endl;
       return 1;
   }

   double op1,op2;
   char *opcode;

   op1=...
   op2=...
   opcode=...

   Calculator one(op1,op2,opcode);
   cout << one.doOperation() << endl;

   return 0;
}
```

   If we input "calculator div 1.1 2.2" in command line, we will see the result 0.5.

  #####(3)leap year
(3)Inspect this program：
``` C++
 #include < iostream >
using std::cout;
using std::cin;
using std::endl;
int main( ){
   int year;
   cout<<"Input year:"<<endl;
   cin>>year;
   if  (year％4==0&&year ％ 100!=0  || year ％ 400==0)
       cout<<year<<" is a leap year"<<endl;
   else   cout<< year<<"is not a leap year"<<endl;
   return 0;
}
```
   Please input the data from a file instead of from keyboard，and save the result into a file. You can use classifstream and ofstream，and judge the end of a file by calling feof()。

  #####(4)Quit a for-loop
（4）Inspect the fragment：
```C++
   for(i=0;i<100;i++)
       for(j=0;j<100;j++)
           for(k=0;k<100;k++)
              if(i+j+k==multiple of 255)
                 exit all three loops;
```
   Please fulfill the program using break. You can use the statement goto also. What is the defference between them?





----

#### THE FOURTH ASSIGNMENT  

  #####(1)find function
(1)Write a **function template** whose prototype is:
```
template<T> 
int find(T val,T *list,int size);
```
This function template is used to find a particular value val in an array list whose size is size. When cuccessful, it returns the subscript i where `list[i]==val` , otherwise returns `-1`.  

  #####(2)class with multiple template parameters 
(2)Define a **class template** that employes more than one template parameters, and create some objects to test it.





----

#### THE FIFTH ASSIGNMENT    

  #####(1)String : constructor and destructor
(1)Study this program, then answer questions:   

``` C++
 #include < iostream >
using std::cout;
using std::endl;
class String{
    static int nCharArray;
    char* str;
    size_t _len;
public:
    String();
    String(char *p);  
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
String::String(char *p){
    _len = strlen(p);
    str = new char[_len+1+1];
    strcpy(str+1,p);
    str[0]=1;
    nCharArray++;
    cout << "in constructor,nCharArray=" << nCharArray << endl;
}

String::String(const String &s){
    str = s.str;
    _len = s._len;
    str[0]++;
    cout << "in constructor,nCharArray=" << nCharArray << endl;
}

char& String::operator[](unsigned int idx){
    if(idx<0 || idx>_len || str==NULL){
        static char nullchar = 0;
        return nullchar;
    }
    if(str[0]>1){
        char *buf=new char[_len+1+1];
        strcpy(buf+1,str+1);
        str[0]--;
        str=buf;
        str[0]=1;
         nCharArray++;
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
    String s1;
    String s2="abc";
    String s3=s2;
    s3[0]='p';
    cout << s2.c_str() << endl;
    cout << s3.c_str() << endl;
    s1=s3;
    s2=s3;
    cout << s1.c_str() << endl;
    cout << s2.c_str() << endl;
}
```
   (a)What is the output?  
   (b)What does nCharArray stand for? Is it equal to the number of String objects?  
   (c)Why is the value of nCharArray less than the number of String objects?  
   (d)In class String, str[0] is the reference count, whose maximum value is 255. Where is the content of Stringobject?  
   (e)How can we know that two String objects share the same memory space?  

(2)Suppose we have a variable:
`double **Matrix;`  
Write two functions:
```C++
double **allocMatrix(int n);    
void releaseMatrix(double **m);
```
Function `allocMatrix(n) ` will allocate memory space from heap to store a matrix with the scale n*n, while function `releaseMatrix(m)` will return the memory space used by m to heap.
