#include<iostream>
using namespace std;

/*
case 1:
class B: public A{
    //order of execution of constructor ->first A() then B();
}
class A: public B, public C{
    //Order of execution of constructor ->first B() then C() and A()
}
class A: public  B, virtual public C{
    //Order of execution of constructor ->first C() then B() and A()
}
}
*/
class Base1{
    int data1;
    public:
    Base1(int z){
        data1=z;
        cout<<"Base1 constructor called"<<endl;
    }
    void print1(){
        cout<<"Base1 data "<<data1<<endl;
    }

};
class Base2{
    int data2;
    public:
    Base2(int v){
        data2=v;
        cout<<"Base2 constructor called"<<endl;
    }
    void print2(){
        cout<<"Base2 data "<<data2<<endl;
    }

};
class derived: public Base1, public Base2{
    int data3;
    public:
    derived(int a, int b, int c): Base1(a), Base2(b){
        data3=c;
        cout<<"Derived constructor called"<<endl;
    }
    void print3(){
        cout<<"Derived data "<<data3<<endl;

    }
};
int main(){
    derived d1(1,2,3);
    d1.print1();
    
}