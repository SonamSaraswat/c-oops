/*******Multilevel inheritance*********/
#include<iostream>
using namespace std;

class Student{
    protected:
    int no;
    public:
    void setData(int);
    void getData();

};
void Student:: setData(int a)
{
    no=a;
}
void Student:: getData()
{
    cout<<"Number "<<no<<endl;
}

class Exam: public Student{
    protected:
    float maths;
    float physics;
    public:
    void setmarks(float, float);
    void getmarks();

};
void Exam :: setmarks(float p, float q){
    maths=p;
    physics=q;
}
void Exam:: getmarks(){
    cout<<"Maths "<<maths<<endl;
    cout<<"PHYSICS "<<physics<<endl;
}

class Result: public Exam
{
    float per;
    public:
    void display(){
       getData();
        getmarks();
        cout<<"Per "<<(maths+physics)/2<<endl;
    }
};
int main(){
    Result r1;
    r1.setData(19);
    r1.setmarks(94.0, 90.0);
    r1.display();
    return 0;
}