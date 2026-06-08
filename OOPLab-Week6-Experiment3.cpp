#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    int rollNumber;
    string firstName;
    string lastName;
    string studentClass;
    double totalMarks;
    char grade;

public:
    Student() {
        rollNumber = 0;
        firstName = "NA";
        lastName =  "NA";
        studentClass = "NA";
        totalMarks = 0.0;
        grade = 'F';
    }

    Student(int r, const string fName, string lName, const string sClass, double marks, char g) {
        rollNumber = r;
        firstName = fName;
        lastName = lName;
        studentClass = sClass;
        totalMarks = marks;
        grade = g;
    }

    // Deep copy constructor
    Student(const Student& s) {
        rollNumber = s.rollNumber;
        firstName = s.firstName;
        lastName = s.lastName;
        studentClass = s.studentClass;
        totalMarks = s.totalMarks;
        grade = s.grade;
    }


    void DisplayClassData() const {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s1(101, "Fatima", "Rao", "BSCS-2nd", 95.5, 'A');
    Student s2(s1); //shallow copy
    Student s3 = s1; //deep copy

    cout << "Original Student:\n";
    s1.DisplayClassData();

    cout << "\nShallow Copied Student (points to same memory):\n";
    s2.DisplayClassData();

    cout << "\nDeep Copied Student (independant copy) :\n";
    s3.DisplayClassData();

    return 0;
}
