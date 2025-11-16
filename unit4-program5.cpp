#include<iostream>
using namespace std;
class book{
    public:
    book(){
        cout<<"base class book constructor\n";
    }
    ~book(){
        cout<<"book class book destructor\n";
    }
};
class librarybook:public book{
    public:
    librarybook(){
        cout<<"derived class library constructor\n";
    }
    ~librarybook(){
        cout<<"derived class librarybook destructor\n";
    }
};
int main(){
    librarybook lb;
}