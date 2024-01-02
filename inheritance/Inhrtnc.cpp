/*********INHERITANCE***********/
#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    float salary;
    
    Employee(){
        id=1;
        salary=10.0;
    }
    
};
//Derived class
/*class {{Derived_class name}}: {{visibility_mode}} {{Base class}}{
   memebrs/methods/etc;
};
NOTE:-
1.Default visibility mode is private
2.Public visiblity mode : Public members of the base class becomes public memebr of the derived class
3.private visibility mode: Public members of the base class becomes private memebr of the derived class
4.Private member are never inherited */

class Developer : public Employee{
    public:
    int language=9;
    Developer(int inpid){
        id=inpid;
    }
};

int main(){

    Employee e1;
    cout<<e1.salary<<endl;
    Developer d1(5);
    cout<<d1.id<<endl;

    
}