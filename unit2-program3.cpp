#include<iostream>
using namespace std;
class book{
    string title,author;
    public:
    book(string t,string a){
        title=t;
        author=a;
    }
    book(const book &b){
        title=b.title;
        author=b.author;
    }
    void display(){
        cout<<"title:"<<title<<"author:"<<author<<endl;
    }
};
int main(){
    book b1("ponniyin selvan","kalki");
    book b2=b1;
    b1.display();
    b2.display();
    return 0;
}