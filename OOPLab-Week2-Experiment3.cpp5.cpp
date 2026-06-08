#include <iostream>
using namespace std;

struct Employee {
    int empNo;
    float salary;
};

void display(Employee e) {
    cout << "Employee Number: " << e.empNo << endl;
    cout << "Salary: " << e.salary << endl;
}

int main() {
    Employee e[3];
    bool exists;

    for (int i = 0; i < 3; i++) {
        do {
            exists = false;
            cout << "Enter employee number: ";
            cin >> e[i].empNo;

            for (int j = 0; j < i; j++) {
                if (e[i].empNo == e[j].empNo) {
                    cout << "Employee ID already exists. Enter Again\n";
                    exists = true;
                    break;
                }
            }
        } while (exists);

        cout << "Enter salary: ";
        cin >> e[i].salary;
    }
    cout << "\n --- Employee Data --- \n";
    for (int i = 0; i < 3; i++) {
        display(e[i]);
    }

    return 0;
}
