#include <iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
    void setData(int v1, int v2){
        a=v1;
        b=v2;
    }
    void print(){
        cout<<a<<"+i , "<< b<<endl;
    }
    void complexSum(complex c1, complex c2){
        a=c1.a+c2.a;
        b=c1.b+c2.b;
    }

};

int main(){

    complex c1,c2,c3;
    c1.setData(2,3);
    c1.print();
    c2.setData(4,5);
    c2.print();

    c3.complexSum(c1,c2);
    c3.print();



}