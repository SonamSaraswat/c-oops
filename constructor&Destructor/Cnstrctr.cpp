/******Constructors & it's types**********/
#include<iostream>
using namespace std;

/*CONSTRUCTOR
it's a spcial memeber function with the 
same name as of the class
used to initialize the objects of it's class.
Should be declared in public section
automatically invoked when object is created.
No return type
can not refer to their address*/

class complex{
    int a, b;
    public:

    //1.Default Constructor

    complex(){
        a=10;
        b=0;
    }
    void print(){
        cout<<a<<"+i "<<b<<endl;
    }

    //2. Parameterized Constructor

    complex(int x, int y){
        a=x;
        b=y;
    }


};

//One more example of Parametrized constructor

class point{
    int x,y;
    public:
    point(int a, int b){
        x=a;
        y=b;
    }

    void display(){
        cout<<"The point is "<<x<<" "<<y<<endl;
    }

    friend void compute(point, point);

};
void compute(point p1, point p2){

    cout<<"The distance between two point is "<<(p2.x-p1.x)<<" "<<(p2.y-p1.y)<<endl;

}

//3. COPY CONSTRUCTOR
/*when no copy constructor is there compiler provides copy constructor
*/
class Number{
    int a;
    public:
    Number(){};
    Number(int num){
        a=num;
    }
    /*Number(Number &obj){
        a=obj.a;
    }*/
    void display(){
        cout<<a<<"copy constructor"<<endl;
    }
    
     
};

int main(){
    complex c1;
    c1.print();

    //IMPLICIT CALL
    complex c2(4,6);
    //Explicit call
    complex c3=complex(5,6);
    c2.print();
    c3.print();
    /******parameterized constructor******/
    point p(1,1);
    p.display();

    point q(4,6);
    q.display();
    compute(p,q);
/*********copy constructor*****/
    Number z1,z3;
    z1=Number(45);
    z1.display();
    Number z2(z1);//copy construcor call will invoked
    cout<<"HAAN COPY KARO"<<endl;
    z2.display();
    z3=z1;//copy constructor call wont invoke when object is already declared 
          //nd we using assignement operator
   
    


}

