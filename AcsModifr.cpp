/*****Acess Modifiers*******/
#include<iostream>
using namespace std;

class base{
    protected:
    int a;
    private:
    int b;

};
//Acess
/*                        Public Derivation        Private Derivation        Protected Derivation
1.Private Members         Not inherited             Not inherited              Not inherited  
2.Protected Members       Protected                 Private                    Protected
3.Public Memebers         Public                    Private                   Protected
*/
class child : protected base{
    public:
    void setData(int p){
        a=p;
    }
    void display(){
        cout<<a<<" Protected member"<<endl;
    }

};

int main(){

    base b1;
    child c;
    c.setData(5);
    c.display();


}