#include <iostream>
using namespace std;

int main()
{
    string studentName;
    int age;
    double examScore;

    // Input
    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Exam Score: ";
    cin >> examScore;

    // Admission Decision
    cout << "\n----- ADMISSION RESULT -----";
    cout << "\nStudent Name : " << studentName;

    if (age >= 18)
    {
        if (examScore >= 50)
        {
            cout << "\nDecision     : Admitted";
        }
        else
        {
            cout << "\nDecision     : Not Admitted: Low Score";
        }
    }
    else
    {
        cout << "\nDecision     : Not Admitted: Underage";
    }

    return 0;
}