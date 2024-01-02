#include<iostream>
using namespace std;

/*************structures****************/
 typedef struct sonam{
   
    int age;
    string color;
    float height;

}s;

/*************UNION****************/
union money{
    int ruppes;
    int dollars;
    int francie;

};
/***************Enum*************/
enum Gender{Male, female};

int main(){


    //STRUCTURE//
    s s1;
    s1.age=23;
    s1.color="brown";
    s1.height=5.4;

    cout<<s1.age<<endl;
    cout<<s1.color<<endl;
    cout<<s1.height<<endl;

    //UNION//
    money m1;
    m1.ruppes=5;
    cout<<m1.ruppes<<endl;
    m1.francie=6;
    cout<<m1.francie<<endl;

    //ENUM//
    Gender gen =Male;
    switch(gen){
        case Male:
        cout<<"Gender is Male"<<endl;
        break;
        case female:
        cout<<"Gender is female"<<endl;
        break;
        default:
        cout<<"Not Applicable";
    }



}