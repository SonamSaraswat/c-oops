/**********FRIEND FUNCTION, INLINE FUNCTION*/


#include<iostream>
using namespace std;

class complex{

    int a;
    int b;
    public:

    /***********FRIEND FUNCTION***********/
    /* 1.Not in the scope of class
    2.Since it's not in the scope of the class , it cannot be  called from the object of 
    that class . c1.sumcomplex();//invalid call
    3.can be invoked without the help of objects;
    4.usually contains the objects  as arguments.
    5.can be declared as private and public.
    6.It cannot access the members directly by their names and need object_name.member_name
    */
    friend complex complexsum(complex c1, complex c2);

    void setNumber(int v1, int v2){
        a=v1;
        b=v2;
    }
    void print(){
        cout<<a<<"+i , "<<b<<endl;
    }

};
/***********INLINE FUNCTION***********/
 inline int add(int a, int b){
    return a+b;
 }

complex complexsum(complex c1, complex c2){
    complex c3;
    /*cout<<a//invalid*/

    c3.a= (c1.a+c2.a);
    c3.b=(c1.b+c2.b);

    return c3;
}

int main(){
    /*********FRIEND FUNCTION*********/
    complex c1, c2,sum;
    c1.setNumber(2,3);
    c1.print();
    c2.setNumber(4,5);
    c2.print();
    sum=complexsum(c1,c2);
    sum.print();

    /**********INLINE FUNCTION***********/
    /*
    inline functions to reduce the function call overhead.
    Not for large fncns.
    a reuest not statement.
    */
    cout<<add(2,4)<<endl;
    cout<<add(8,4)<<endl;


}