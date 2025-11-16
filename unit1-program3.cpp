#include <iostream>
using namespace std;

class ElectricityBill {
private:
    string customerName;
    int customerID;
    int units;
    float billAmount;

public:
    // Function to set customer details
    void setDetails(string name, int id, int u) {
        customerName = name;
        customerID = id;
        units = u;
        billAmount = 0;
    }

    // Function to calculate bill based on units
    void calculateBill() {
        if (units <= 100) {
            billAmount = units * 1.50;   // Rs.1.50 per unit
        }
        else if (units <= 200) {
            billAmount = (100 * 1.50) + (units - 100) * 2.00;
        }
        else if (units <= 300) {
            billAmount = (100 * 1.50) + (100 * 2.00) + (units - 200) * 3.00;
        }
        else {
            billAmount = (100 * 1.50) + (100 * 2.00) + (100 * 3.00) + (units - 300) * 5.00;
        }
    }

    // Function to display bill
    void displayBill() {
        cout << "\n--- Electricity Bill ---\n";
        cout << "Customer Name: " << customerName << endl;
        cout << "Customer ID: " << customerID << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill Amount: Rs." << billAmount << endl;
    }
};

int main() {
    string name;
    int id, units;

    // Input from user
    cout << "Enter Customer Name: ";
    getline(cin, name);
    cout << "Enter Customer ID: ";
    cin >> id;
    cout << "Enter Units Consumed: ";
    cin >> units;

    // Create object
    ElectricityBill eb;

    // Set details and calculate bill
    eb.setDetails(name, id, units);
    eb.calculateBill();

    // Display bill
    eb.displayBill();

    return 0;
}