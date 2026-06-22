#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string studentName;
    double theoryMarks, practicalMarks, averageScore;

    // Input
    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Theory Test Marks: ";
    cin >> theoryMarks;

    cout << "Enter Practical Test Marks: ";
    cin >> practicalMarks;

    // Processing
    averageScore = (theoryMarks + practicalMarks) / 2;

    // Output
    cout << "\n====================================";
    cout << "\n      DRIVING TEST RESULTS";
    cout << "\n====================================";
    cout << "\nStudent Name    : " << studentName;
    cout << "\nTheory Marks    : " << theoryMarks;
    cout << "\nPractical Marks : " << practicalMarks;
    cout << "\nAverage Score   : " << fixed << setprecision(2)
         << averageScore;

    if (averageScore >= 50)
        cout << "\nResult          : PASS";
    else
        cout << "\nResult          : FAIL";

    cout << "\n====================================";

    return 0;
}