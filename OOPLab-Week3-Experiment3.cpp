#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    //Constructor
    Employee()
    {
        cout << "Name: ";
        cin >> name;

        cout << "ID Number: ";
        cin >> idNumber;

        cout << "Department: ";
        cin >> department;

        cout << "Position: ";
        cin >> position;
    }

    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "ID Number: " << idNumber << endl;
        cout << "Department: " << department << endl;
        cout << "Position: " << position << endl;
    }
};

int main()
{
    cout << "Enter data for Employee 1\n";
    Employee emp1;

    cout << "\nEnter data for Employee 2\n";
    Employee emp2;

    cout << "\nEnter data for Employee 3\n";
    Employee emp3;

    cout << "\nEmployee 1\n";
    emp1.displayData();

    cout << "\nEmployee 2\n";
    emp2.displayData();

    cout << "\nEmployee 3\n";
    emp3.displayData();

    return 0;
}
