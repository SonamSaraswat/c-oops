/**********Virtual Base class***********/
#include<iostream>
using namespace std;

class A{
    protected:
    int roll_no;
    public:
    void setData(int a){
        roll_no=a;
    }
    void print(){
        cout<<roll_no<<" ROLL_NO"<<endl;
    }

};
class B: virtual public A{
    protected:
    float maths,physics;
    public:
    void setData2(float p, float q){
        maths=p;
        physics=q;
    }
    void GetData(){
        cout<<" MATHS "<<maths<<endl;
        cout<<"PHYSICS "<<physics<<endl;    }

};
class C: virtual public A{
    protected:
    float score;
    public:
    void setData3(float z){
        score=z;
    }
    void Display(){
        cout<<"Score "<<score<<endl;
    }


};
class D: public B, public C{
    private:
    float total;
    public:
    void dis(){
        total=maths+physics+score;
        print();
        GetData();
        Display();
        cout<<total<<" total "<<endl;
    }

};
int main(){
    D r1;
    r1.setData(19);
    r1.setData2(90.5,90.4);
    r1.setData3(90.0);
    r1.dis();



    return 0;
}