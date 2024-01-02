/************Intialization list in constructors*********/
#include<iostream>
using namespace std;

class test{
    public:
    int a;
    int b;
    //test(int i, int j): a(i),b(j)
    //test(int i, int j): a(i),b(a+j)
    //test(int i, int j): a(i),b(i+j)
    //test(int i, int j): a(j),b(i)
    test(int i, int j): a(i+b),b(j)/*This will give error because we have declared a before b 
    so we can not use b before a*/
    {
        cout<<"Constructor callled"<<endl;
        cout<<"Value of a "<<a<<endl;
        cout<<"Value of b "<<b<<endl;

    }
};
int main(){
    test t(4,5);
}