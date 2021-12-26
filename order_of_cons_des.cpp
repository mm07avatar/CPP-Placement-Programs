#include<iostream>
using namespace std;
class A{
public:
    A(){
    cout<<"Class A constructor"<<endl;
    }
    ~A()
{
    cout<<"Class A destructor"<<endl;
}
};
class B:public A{
public:
    B(){
    cout<<"Class B constructor"<<endl;
    }
    ~B()
{
    cout<<"Class B destructor"<<endl;
}
};
class C:public B{
public:
    C(){
    cout<<"Class C constructor"<<endl;
    }
    ~C()
{
    cout<<"Class C destructor"<<endl;
}
};
main(){
C obj;
}
