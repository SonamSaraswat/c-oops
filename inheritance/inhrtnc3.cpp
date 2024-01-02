/**********Multiple inheritance********/
#include<iostream>
using namespace std;

//syntax for multiple inheritance
/*
class derived: visibility_mode base1, visibility_mode base2
{
class body
};
*/
class base1{
    protected:
    int data1;
    public:
    void setData1(int p){
        data1=p;
    }


};
class base2{
    protected:
    int data2;
    public:
    void setData2(int o){
        data2=o;

    }

};
class derived: public base1, public base2{
    public:
    void show(){
        cout<<"Base1 "<<data1<<endl;
        cout<<"Base2 "<<data2<<endl;
        
    }

};

int main(){

    derived d1;
    d1.setData1(50);
    d1.setData2(60);
    d1.show();
    return 0;
}