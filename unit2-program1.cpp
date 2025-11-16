#include<iostream>
using namespace std;
class student{
    string name;
    int rollno;
    string course;
    public:
    student(string n,int r,string c){
        name=n;
        rollno=r;
        course=c;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;
        cout<<"course:"<<course<<endl;
    }
};
int main(){
    student s1("arun",101,"computer science");
    student s2("divya",102,"electronics");
    s1.display();
    s2.display();
    return 0;
}