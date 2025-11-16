#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int protectedVar;

public:
    int publicVar;

    Base() : protectedVar(10), publicVar(20) {}

    void showBaseData() {
        cout << "Base protectedVar = " << protectedVar << endl;
        cout << "Base publicVar = " << publicVar << endl;
    }
};

// Derived class using PUBLIC inheritance
class PublicDerived : public Base {
public:
    void showData() {
        cout << "Accessing from PublicDerived class:" << endl;
        cout << "protectedVar = " << protectedVar << endl; // accessible
        cout << "publicVar = " << publicVar << endl;       // accessible
    }
};

// Derived class using PRIVATE inheritance
class PrivateDerived : private Base {
public:
    void showData() {
        cout << "Accessing from PrivateDerived class:" << endl;
        cout << "protectedVar = " << protectedVar << endl; // accessible
        cout << "publicVar = " << publicVar << endl;       // accessible
    }
    // Note: Base members become private here, so they can’t be accessed from outside.
};

int main() {
    PublicDerived pubObj;
    PrivateDerived privObj;

    cout << "--- Public Inheritance ---" << endl;
    pubObj.showData();
    cout << "Accessing publicVar directly: " << pubObj.publicVar << endl; // OK
    // pubObj.protectedVar; // ❌ Not allowed, protected

    cout << "\n--- Private Inheritance ---" << endl;
    privObj.showData();
    // privObj.publicVar; // ❌ Not allowed, becomes private in derived class

    return 0;
}