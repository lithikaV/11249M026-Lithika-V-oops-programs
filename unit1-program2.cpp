#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks1, marks2, marks3;

public:
    // Function to set student details
    void setDetails(string n, int r, float m1, float m2, float m3) {
        name = n;
        rollNo = r;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    // Function to calculate total marks
    float getTotal() {
        return marks1 + marks2 + marks3;
    }

    // Function to calculate average
    float getAverage() {
        return getTotal() / 3;
    }

    // Function to display student details
    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks1 << ", " << marks2 << ", " << marks3 << endl;
        cout << "Total Marks: " << getTotal() << endl;
        cout << "Average Marks: " << getAverage() << endl;
    }
};

int main() {
    Student s1;

    // Set student details (you can take input from user also)
    s1.setDetails("Anjali", 101, 85, 90, 80);

    // Display student details
    s1.display();

    return 0;
}