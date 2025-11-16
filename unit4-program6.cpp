#include<iostream>
using namespace std;
class account{
    public:
    virtual void displaybalance(){
        cout<<"generic account balance\n";
    }
};
class savings:public account{
    public:
    void displaybalance(){
        cout<<"savings account balance.rs.5000\n";
    }
};
class current:public account{
    public:
    void displaybalance(){
        cout<<"current account balance rs.10000\n";
    }
};
int main(){
    account *acc;
    savings s;
    current c;
    acc=&s;
    acc -> displaybalance();
    acc=&c;
    acc->displaybalance();
}