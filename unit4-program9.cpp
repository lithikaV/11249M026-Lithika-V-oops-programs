#include<iostream>
using namespace std;
class student{
    int roll;
    string name;
    public:
    void getdata(){
        cout<<"enter roll and name:";
        cin>>roll>>name;
    }
    void showdata(){
        cout<<"roll:"<<roll<<",name:"<<name<<endl;
    }
};
int main(){
    student s1,*ptr;
    ptr=&s1;
    ptr->getdata();
    ptr->showdata();
}