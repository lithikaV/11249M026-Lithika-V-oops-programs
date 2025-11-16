#include<iostream>
using namespace std;
class bankaccount{
    int accno;
    public:
    bankaccount(int a){
        accno=a;
        cout<<"account:"<<accno<<"opened."<<endl;
    }
    ~bankaccount(){
        cout<<"account"<<accno<<"closed."<<endl;
    }
};
int main(){
    bankaccount b1(1001);
    return 0;
}