/**********Dynamic initializtion of objects using Constructor*********/
#include<iostream>
using namespace std;

class BankDeposit{
    int p;
    int y;
    float IR;
    float rv;

    public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p,int y, int r);
    void show();



};
BankDeposit :: BankDeposit(int p, int y, float r){
    p=p;
    y=y;
    IR=r;
    rv=p;
    for(int i=0;i<y;i++){
        rv=rv*(1+r);
    }
}
BankDeposit :: BankDeposit(int p, int y, int r){
    p=p;
    y=y;
    IR=float(r)/100;
    rv=p;
    for(int i=0;i<y;i++){
        rv=rv*(1+r);
    }
}
void BankDeposit:: show(){
    cout<<"Pricipal"<<p<<" "<<"Years"<<y<<" "<<rv<<endl;

}
int main(){
    BankDeposit bd1,bd2,bd3;
    int p,y;
    float ir;
    int r;
    cin>>p>>y>>ir;
    bd1=BankDeposit(p,y,ir);
    bd1.show();

}