#include<iostream>
using namespace std;


class complex{

    int a,b;
    public:
    void setData(int x, int y){
        a=x;
        b=y;
    }
    void print(){
        cout<<a<<" A AND B "<<b<<endl;
    }

};

int main(){

    complex c1;
    complex *ptr=&c1;
    //complex * ptr= new complex;
    c1.setData(6,7);
    c1.print();
    complex *ptr=&c1;
    (*ptr).print();
    //OR
    /*
    */

}