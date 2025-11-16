#include<iostream>
using namespace std;
class employee{
    string name;
    int id;
    public:
    employee(){
        name="unknown";
        id=0;
    }
    void display(){
        cout<<"employee id:"<<id<<"name:"<<name<<endl;
    }
};
int main(){
    employee e1;
    e1.display();
    return 0;
}