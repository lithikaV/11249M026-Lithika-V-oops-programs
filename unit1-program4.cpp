#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    string department;
    float salary;

public:
    // Function to input employee details
    void input() {
        cout << "\nEnter Employee ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display one employee
    void display() {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nDepartment: " << department;
        cout << "\nSalary: " << salary << endl;
    }

    int getID() {
        return id;
    }

    // Update details
    void update() {
        cout << "\n--- Update Employee Details ---\n";
        cout << "Enter new name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter new department: ";
        getline(cin, department);

        cout << "Enter new salary: ";
        cin >> salary;
    }
};


int main() {
    Employee emp[50];   // store up to 50 employees
    int choice, count = 0, id, found;

    while (true) {
        cout << "\n===== COMPANY EMPLOYEE SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            emp[count].input();
            count++;
            cout << "\nEmployee Added Successfully!\n";
            break;

        case 2:
            if (count == 0) {
                cout << "\nNo employees to display.\n";
            } else {
                cout << "\n=== Employee List ===\n";
                for (int i = 0; i < count; i++) {
                    emp[i].display();
                }
            }
            break;

        case 3:
            cout << "\nEnter ID to search: ";
            cin >> id;
            found = 0;

            for (int i = 0; i < count; i++) {
                if (emp[i].getID() == id) {
                    cout << "\nEmployee Found:\n";
                    emp[i].display();
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "\nEmployee Not Found.\n";
            break;

        case 4:
            cout << "\nEnter ID to update: ";
            cin >> id;
            found = 0;

            for (int i = 0; i < count; i++) {
                if (emp[i].getID() == id) {
                    emp[i].update();
                    cout << "\nUpdated Successfully!\n";
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "\nEmployee Not Found.\n";
            break;

        case 5:
            cout << "\nEnter ID to delete: ";
            cin >> id;
            found = 0;

            for (int i = 0; i < count; i++) {
                if (emp[i].getID() == id) {
                    // shift elements left
                    for (int j = i; j < count - 1; j++) {
                        emp[j] = emp[j + 1];
                    }
                    count--;
                    cout << "\nEmployee Deleted Successfully!\n";
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "\nEmployee Not Found.\n";
            break;

        case 6:
            cout << "\nExiting...\n";
            return 0;

        default:
            cout << "\nInvalid Choice!\n";
        }
    }
}
