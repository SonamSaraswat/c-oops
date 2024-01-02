#include<iostream>
using namespace std;

class c2;
class c1{
    int z;
    public:
    void setVal(int val){
        z=val;
    }
    friend void sum(c1,c2);
    friend void swapie(c1 & ,c2 &);
};

class c2{
    int x;
    public:
    void setVal(int val){
        x=val;
    }
    friend void sum(c1,c2);
    friend void swapie(c1 &,c2 &);
};
void sum(c1 o1, c2 o2){
    int res=o1.z+ o2.x;
    cout<<res<<" "<<endl;

}

void swapie(c1 & a, c2 &b){
    int temp=a.z;
    a.z=b.x;
    b.x=temp;

    cout<<a.z <<" "<<b.x<<endl;

}

int main(){
    c1 v;
    c2 p;
    v.setVal(2);
    p.setVal(3);

    sum(v,p);
    swapie(v,p);
    

}