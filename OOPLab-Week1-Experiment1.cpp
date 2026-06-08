#include <iostream>
using namespace std;

struct Student {
    int studentID;
    char* studentName;
    char* courseCode;
    char* courseName;
    int courseMarks;
};

int main() {
    int id, marks;
    char name[50], course_code[20], course_name[50];

    cout << "\n\n**\tGet Values from User\t**\n\n";
    cout << "Enter Roll Number: ";
    cin >> id;
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Course Code: ";
    cin >> course_code;
    cout << "Enter Course Name: ";
    cin >> course_name;
    cout << "Enter Course Marks: ";
    cin >> marks;
   
    Student s1 = { id,name,course_code,course_name,marks };

    cout << "\n\n**\tDisplay Stored Values\t**\n\n";
    cout << "Student ID: " << s1.studentID << endl;
    cout << "Student Name: " << s1.studentName << endl;
    cout << "Course Code: " << s1.courseCode << endl;
    cout << "Course Name: " << s1.courseName << endl;
    cout << "Course Marks: " << s1.courseMarks << endl;

    return 0;
}
