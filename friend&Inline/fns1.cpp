/******FREIND FUNCTION AND ITS MEMBERS************/

#include<iostream>
using namespace std;


//forward declaration

class complex;

class calculator{
    public:
    int add(int a, int b){
        return (a+b);
    }
    int sumcomplex(complex, complex);
};

class complex{
    int a,b;
    public:
    void setNumber(int n1, int n2){
        a=n1;
        b=n2;
    }
    friend int calculator:: sumcomplex(complex c1, complex c2);
    void print(){
        cout<<"ur number is"<<a<<" +i "<<b<<endl;
    }

};
int calculator:: sumcomplex(complex c1,complex c2){
    return c1.a+c2.a;

}

int main(){

    complex c1,c2;
    c1.setNumber(1,4);
    c2.setNumber(5,7);
    calculator calc;
    int res=calc.sumcomplex(c1,c2);
    cout<<"sum "<<res<<endl;

}