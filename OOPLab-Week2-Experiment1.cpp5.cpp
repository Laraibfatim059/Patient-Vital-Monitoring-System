#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks1, marks2, marks3;
};

int main() {
    Student s;
    float total;

    cout << "Enter student name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cout << "Enter marks of subject 1: ";
    cin >> s.marks1;
    cout << "Enter marks of subject 2: ";
    cin >> s.marks2;
    cout << "Enter marks of subject 3: ";
    cin >> s.marks3;

    total = s.marks1 + s.marks2 + s.marks3;

    cout << "\n--- Student Details ---\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNo << endl;

    cout << "Marks" 
        << "\n Subject 01: " << s.marks1 
        << "\n Subject 02: " << s.marks2 
        << "\n Subject 03: " << s.marks3 << endl;

    cout << "Total Marks: " << total << endl;

    return 0;
}
