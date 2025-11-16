#include<iostream>
using namespace std;
class employee{
    protected:
    string name;
    int id;
    public:
    void getemployeedetails(){
        cout<<"enter employee name:";
        cin>>name;
        cout<<"enter employee id:";
        cin>>id;
    }
    void showemployeedetails(){
        cout<<"employee name:"<<name<<endl;
        cout<<"employee id:"<<id<<endl;
    }
};
class salary:public employee{
    protected:
    float basicpay;
    public:
    void getsalary(){
        cout<<"enter basic salary:";
        cin>>basicpay;
    }
    void showsalary(){
        cout<<"basic pay:rs."<<basicpay<<endl;
    }
};
class bonus:public salary{
    float bonusamount;
    public:
    void calculatebonus(){
        bonusamount=0.10*basicpay;
    }
    void displaytotalsalary(){
        float total=basicpay+bonusamount;
        cout<<"bonus:rs"<<bonusamount<<endl;
        cout<<"total salary:rs."<<total<<endl;
    }
};
int main(){
    bonus b;
    b.getemployeedetails();
    b.getsalary();
    b.calculatebonus();
    cout<<"employee salary details:"<<endl;
    b.showemployeedetails();
    b.showsalary();
    b.displaytotalsalary();
    return 0;
}