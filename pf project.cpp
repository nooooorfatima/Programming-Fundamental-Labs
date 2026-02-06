#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    int quantity;
};

struct Issue {
    int issueId;
    string studentName;
    int bookId;
    bool returned;
};

Book books[5] = {
    {101, "C++ Programming", "Bjarne Stroustrup", 3},
    {102, "Data Structures", "Mark Allen", 2},
    {103, "Database Systems", "Elmasri", 4},
    {104, "Operating Systems", "Silberschatz", 1},
    {105, "Software Engineering", "Pressman", 2}
};

Issue issues[20];
int issueCount = 0;
int nextIssueId = 1;

void viewBooks() {
    cout << "\nAvailable Books:\n";
    cout << "ID\tTitle\t\t\tAuthor\t\t\tQuantity\n";
    for (int i = 0; i < 5; i++) {
        cout << books[i].id << "\t" 
             << books[i].title << "\t\t" 
             << books[i].author << "\t\t" 
             << books[i].quantity << endl;
    }
}

void issueBook() {
    int bookId;
    string name;
    bool found = false;

    cin.ignore();
    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Book ID: ";
    cin >> bookId;

    for (int i = 0; i < 5; i++) {
        if (books[i].id == bookId) {
            found = true;
            if (books[i].quantity > 0) {
                books[i].quantity--;

                issues[issueCount].issueId = nextIssueId++;
                issues[issueCount].studentName = name;
                issues[issueCount].bookId = bookId;
                issues[issueCount].returned = false;

                cout << "\nBook Issued Successfully!\n";
                cout << "Issue ID: " << issues[issueCount].issueId << endl;

                issueCount++;
            } else {
                cout << "\nBook is out of stock.\n";
            }
            break;
        }
    }

    if (!found) {
        cout << "\nInvalid Book ID.\n";
    }
}

void returnBook() {
    int issueId;
    bool found = false;

    cout << "Enter Issue ID: ";
    cin >> issueId;

    for (int i = 0; i < issueCount; i++) {
        if (issues[i].issueId == issueId && !issues[i].returned) {
            issues[i].returned = true;

            for (int j = 0; j < 5; j++) {
                if (books[j].id == issues[i].bookId) {
                    books[j].quantity++;
                    break;
                }
            }

            cout << "\nBook Returned Successfully.\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nInvalid Issue ID or Book already returned.\n";
    }
}

void viewIssuedBooks() {
    cout << "\nIssued Books:\n";
    cout << "IssueID\tStudent Name\tBook ID\tStatus\n";

    for (int i = 0; i < issueCount; i++) {
        cout << issues[i].issueId << "\t"
             << issues[i].studentName << "\t\t"
             << issues[i].bookId << "\t"
             << (issues[i].returned ? "Returned" : "Issued") << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n====== Library Management System ======\n";
        cout << "1. View Books\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. View Issued Books\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                viewBooks();
                break;
            case 2:
                issueBook();
                break;
            case 3:
                returnBook();
                break;
            case 4:
                viewIssuedBooks();
                break;
            case 5:
                cout << "\nExiting Program...\n";
                break;
            default:
                cout << "\nInvalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}

