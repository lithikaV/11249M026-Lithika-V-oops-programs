#include<iostream>
using namespace std;
class employee{
    int id;
    string name;
    public:
    void getdata(){
        cout<<"enter ID and name:";
        cin>>id>>name;
    }
    void display(){
        cout<<"id:"<<id<<"name:"<<name<<endl;
    }
};
int main(){
    employee emp[3];
    cout<<"enter details of 3 employees:\n";
    for(int i=0;i<3;i++){
        emp[i].getdata();
    }
    cout<<"\nEmployee Details:\n";
    for(int i=0;i<3;i++){
        emp[i].display();
    }
    return 0;
}