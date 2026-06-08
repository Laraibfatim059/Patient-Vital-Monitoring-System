#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string employeeName;
    int employeeNumber;
    string hireDate;

public:
    Employee()
    {
        employeeName = "";
        employeeNumber = 0;
        hireDate = "";
    }

    Employee(string name, int number, string date)
    {
        employeeName = name;
        employeeNumber = number;
        hireDate = date;
    }

    void setEmployeeName(string name)
    {
        employeeName = name;
    }

    void setEmployeeNumber(int number)
    {
        employeeNumber = number;
    }

    void setHireDate(string date)
    {
        hireDate = date;
    }

    string getEmployeeName() const
    {
        return employeeName;
    }

    int getEmployeeNumber() const
    {
        return employeeNumber;
    }

    string getHireDate() const
    {
        return hireDate;
    }
};

class ProductionWorker : public Employee
{
private:
    int shift;
    double hourlyPayRate;

public:
    ProductionWorker() : Employee()
    {
        shift = 1;
        hourlyPayRate = 0.0;
    }

    ProductionWorker(string name, int number, string date, int s, double rate)
        : Employee(name, number, date)
    {
        setShift(s);
        hourlyPayRate = rate;
    }

    void setShift(int s)
    {
        if (s == 1 || s == 2)
            shift = s;
        else
            shift = 1;
    }

    void setHourlyPayRate(double rate)
    {
        hourlyPayRate = rate;
    }

    int getShift() const
    {
        return shift;
    }

    double getHourlyPayRate() const
    {
        return hourlyPayRate;
    }
};

int main()
{
    string name, date;
    int number, shift;
    double rate;

    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter employee number: ";
    cin >> number;

    cin.ignore();

    cout << "Enter hire date: ";
    getline(cin, date);

    cout << "Enter shift (1 for Day, 2 for Night): ";
    cin >> shift;

    cout << "Enter hourly pay rate: ";
    cin >> rate;

    ProductionWorker worker(name, number, date, shift, rate);

    cout << "\nEmployee Information\n";
    cout << "Name: " << worker.getEmployeeName() << endl;
    cout << "Employee Number: " << worker.getEmployeeNumber() << endl;
    cout << "Hire Date: " << worker.getHireDate() << endl;

    cout << "Shift: ";
    if (worker.getShift() == 1)
        cout << "Day Shift" << endl;
    else
        cout << "Night Shift" << endl;

    cout << "Hourly Pay Rate: " << worker.getHourlyPayRate() << endl;

    return 0;
}
