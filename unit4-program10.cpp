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
    int n;
    cout<<"enter number of students:";
    cin>>n;
    student *s[n];
    for(int i=0;i<n;i++){
        s[i]=new student;
        s[i]->getdata();
    }
    cout<<"\nstudent details:\n";
    for(int i=0;i<n;i++){
        s[i]->showdata();
        delete s[i];
    }
}