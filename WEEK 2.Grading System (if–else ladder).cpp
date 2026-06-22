#include <iostream>
using namespace std;

int main()
{
    string studentName;
    int marks;
    char grade;

    // Input
    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Exam Marks: ";
    cin >> marks;

    // Grade Assignment
    if (marks >= 70 && marks <= 100)
        grade = 'A';
    else if (marks >= 60)
        grade = 'B';
    else if (marks >= 50)
        grade = 'C';
    else if (marks >= 40)
        grade = 'D';
    else
        grade = 'E';

    // Output
    cout << "\n----- STUDENT RESULTS -----";
    cout << "\nStudent Name : " << studentName;
    cout << "\nMarks        : " << marks;
    cout << "\nGrade        : " << grade;

    return 0;
}