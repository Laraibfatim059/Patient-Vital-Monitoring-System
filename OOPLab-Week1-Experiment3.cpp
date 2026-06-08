#include <iostream>
using namespace std;

struct Employee {
    int empNumber;
    float compensation;
};

void display(Employee e) {
    cout << "------------------------" << endl;
    cout << "Employee Number: " << e.empNumber << endl;
    cout << "Compensation: " << e.compensation << "$" << endl;
    cout << "------------------------" << endl;
}

int main() {
    Employee e1, e2, e3;

    cout << "Enter details for Employee 1:\n";
    cout << "Employee Number: ";
    cin >> e1.empNumber;
    cout << "Compensation: ";
    cin >> e1.compensation;

    cout << "\nEnter details for Employee 2:\n";
    cout << "Employee Number: ";
    cin >> e2.empNumber;
    cout << "Compensation: ";
    cin >> e2.compensation;

    cout << "\nEnter details for Employee 3:\n";
    cout << "Employee Number: ";
    cin >> e3.empNumber;
    cout << "Compensation: ";
    cin >> e3.compensation;

    cout << "\n\tEmployee Details:\n\n";
    display(e1);
    display(e2);
    display(e3);

    return 0;
}
