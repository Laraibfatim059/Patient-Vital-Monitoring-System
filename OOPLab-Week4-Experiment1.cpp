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
    // Default Constructor
    Employee()
    {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }

    // Constructor with all values
    Employee(string n, int id, string dept, string pos)
    {
        setName(n);
        setIdNumber(id);
        setDepartment(dept);
        setPosition(pos);
    }

    // Constructor with name and id only
    Employee(string n, int id)
    {
        setName(n);
        setIdNumber(id);
        department = "";
        position = "";
    }

    // Setters
    void setName(string n)
    {
        name = n;
    }

    void setIdNumber(int id)
    {
        idNumber = id;
    }

    void setDepartment(string dept)
    {
        department = dept;
    }

    void setPosition(string pos)
    {
        position = pos;

    }

    // Getters
    string getName()
    {
        return name;
    }

    int getIdNumber()
    {
        return idNumber;
    }

    string getDepartment()
    {
        return department;
    }

    string getPosition()
    {
        return position;
    }

    // Display Function
    void displayData()
    {
        cout << "Name: " << getName() << endl;
        cout << "ID Number: " << getIdNumber() << endl;
        cout << "Department: " << getDepartment() << endl;
        cout << "Position: " << getPosition() << endl;
    }
};

int main()
{
    string name, department, position;
    int id;

    // Employee 1 using constructor with all values
    cout << "Enter details for Employee 1:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "ID Number: ";
    cin >> id;
    cout << "Department: ";
    cin >> department;
    cout << "Position: ";
    cin >> position;

    Employee emp1 = Employee(name, id, department, position);

    // Employee 2 using constructor with name and ID only
    cout << "\nEnter details for Employee 2:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "ID Number: ";
    cin >> id;

    Employee emp2 = Employee(name, id);

    // Employee 3 using default constructor
    Employee emp3 = Employee();
    cout << "\n------------------------------\n";
    // Display all employee data
    cout << "\nEmployee 1 Details (using constructor with all values):\n";
    emp1.displayData();

    cout << "\nEmployee 2 Details (using constructor with name and id values):\n";
    emp2.displayData();

    cout << "\nEmployee 3 Details (using default constructor):\n";
    emp3.displayData();

    return 0;
}
