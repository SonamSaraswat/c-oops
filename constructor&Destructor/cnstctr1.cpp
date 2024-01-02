/********CONSTRUCTOR OVERLOADING*********/
#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:

    complex(){
        a=0;
        b=10;
    }
    complex(int x, int y){
        a=x;
        b=y;
    }
   complex(int x){
        a=x;
        b=0;
    }

    //DEFAULT ARGUMENTS

    /*compiler will give error saying constructors cannot
    be overloaded as we already have constructor with two arguments
    if we pass y nd also have constructor with one argument if we dont pass y*/
    complex(int x, int y=9){
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<"+i "<<b<<endl;
    }

};


int main(){
    complex c1, c2, c3,c4;
    c1=complex(3,4);
    c1.display();
    c2=complex(9);
    c2.display();
    c1=complex();
    c3.display();
    c4=complex(2);
    c4.display();


}