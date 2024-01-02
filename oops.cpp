#include <iostream>
using namespace std;

/******CLASS******/
class employee{
    public:

    int age;
    string name;
    float salary;

    void setData(int age, string name, float salary){
        this->age=age;
        this->name=name;
        this->salary=salary;
    }
    void getData(){
        cout<<age<<endl;
        cout<<name<<endl;
        cout<<salary<<endl;
    }
};


int main(){
    employee e1;
    employee e2;
    e1.setData(23,"sonam",7000000.00);
    e1.getData();
    e2.setData(24,"Monam",8000000.00);
    cout<<endl;
    e2.getData();
    
}