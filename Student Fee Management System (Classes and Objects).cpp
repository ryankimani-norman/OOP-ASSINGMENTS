#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    double feeBalance;

public:
    // Function to input student details
    void inputStudent() {
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);

        cout << "Enter Initial Fee Balance: ";
        cin >> feeBalance;
        cin.ignore(); // clear input buffer
    }

    // Function to make a payment
    void makePayment() {
        double payment;
        cout << "\nEnter Payment Amount: ";
        cin >> payment;

        if (payment > feeBalance) {
            cout << "Payment exceeds fee balance! Transaction not allowed.\n";
        } else {
            feeBalance -= payment;
            cout << "Payment successful.\n";
        }
    }

    // Function to display student status
    void displayStatus() {
        cout << "\n----- Student Fee Status -----\n";
        cout << "Name: " << name << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main() {
    Student s;

    cout << "=== Student Fee Management System ===\n\n";

    // Input student details
    cin.ignore(); // ensure clean input buffer at start
    s.inputStudent();

    // Process fee payment
    s.makePayment();

    // Display updated status
    s.displayStatus();

    return 0;
}
