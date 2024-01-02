/******Ambiguity resolution*********/
#include<iostream>
using namespace std;

class base1{
    int p;
    public:
    void greet(){
        cout<<"HELLO, HOW ARE YOU "<<endl;
    }

};
class base2{
    int q;
    public:
    void greet(){
        cout<<"Namaste "<<endl;
    }
};
class derived: public base1, public base2{
    int s;
    public:
    void greet(){
        /*
        When compiler is confused which function to call
        then we use scope resolution operator to tell compiler
        which function to call.*/
        base1::greet();
        cout<<"2ND TYPE GREET "<<endl;
       base2:: greet();
    }

};
/********AMBIGUITY 2*******/
class B{
    public:
    void say(){
        cout<<"Hello"<<endl;
    }

};
/*when we have same fn in derived class as base class then compiler
overwites nd run derived class's fn, but if we dont have
then compiler runs base class fnc.*/
class D :public B{
    public:
    void say(){
        cout<<"Namaste"<<endl;
    }

};
int main(){
    //Ambiguity 1
    derived d;
    d.greet();
    //Ambiguity 2
    D d1;
    d1.say();
    return 0;

}