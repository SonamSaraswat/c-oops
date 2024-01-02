/******Destructor********/
#include<iostream>
using namespace std;


//Destructor never takes an argument and never return a value
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"CONSTUCOR FOR OBJECT "<<count<<endl;
    }
    ~num(){
        cout<<"DESTRUCTOR FOR OBJECT"<<count<<endl;
        count--;
    }
};

int main(){
    num n1;
    {
        num n2,n3;
    }
    cout<<"Back to main"<<endl;

}