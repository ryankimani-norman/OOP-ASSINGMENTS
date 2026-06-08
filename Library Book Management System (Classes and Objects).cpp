#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copies;

public:
    // Function to input book details
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter number of copies available: ";
        cin >> copies;

        cin.ignore(); // clear input buffer
    }

    // Function to borrow a book
    void borrowBook() {
        if (copies > 0) {
            copies--;
            cout << "Book borrowed successfully!\n";
        } else {
            cout << "Sorry, no copies available to borrow.\n";
        }
    }

    // Function to display book details
    void displayDetails() {
        cout << "\n--- Book Details ---\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies available: " << copies << endl;
    }
};

int main() {
    Book b;

    // Input book details
    cout << "=== Enter Book Information ===\n";
    b.inputDetails();

    // Borrow a book
    cout << "\n=== Borrowing Book ===\n";
    b.borrowBook();

    // Display updated details
    b.displayDetails();

    return 0;
}