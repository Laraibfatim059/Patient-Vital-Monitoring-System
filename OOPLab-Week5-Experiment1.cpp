#include <iostream>
#include <iomanip>
using namespace std;

class Payroll
{
private:
    double hourlyPayRate;
    double hoursWorked;
    double totalPay;

public:
    Payroll()
    {
        hourlyPayRate = 0;
        hoursWorked = 0;
        totalPay = 0;
    }

    void setHourlyPayRate(double rate)
    {
        hourlyPayRate = rate;
    }

    void setHoursWorked(double hours)
    {
        while (hours < 0 || hours > 60)
        {
            cout << "Invalid hours entered. Please enter hours between 0 and 60: ";
            cin >> hours;
        }

        hoursWorked = hours;
        totalPay = hourlyPayRate * hoursWorked;
    }

    double getHourlyPayRate()
    {
        return hourlyPayRate;
    }

    double getHoursWorked()
    {
        return hoursWorked;
    }

    double getTotalPay()
    {
        return totalPay;
    }

    void displayEmployeeData(int employeeNumber)
    {
        cout << "\nEmployee " << employeeNumber << " Payroll Details\n";
        cout << "-----------------------------------\n";
        cout << "Hourly Pay Rate : $" << fixed << setprecision(2) << hourlyPayRate << endl;
        cout << "Hours Worked    : " << hoursWorked << endl;
        cout << "Gross Pay       : $" << totalPay << endl;
    }
};

int main()
{
    Payroll employees[7];
    double rate, hours;

    cout << "========== Employee Payroll System ==========\n";

    for (int i = 0; i < 7; i++)
    {
        cout << "\nEnter details for Employee " << i + 1 << endl;
        cout << "-----------------------------------\n";

        cout << "Enter hourly pay rate: $";
        cin >> rate;
        employees[i].setHourlyPayRate(rate);

        cout << "Enter number of hours worked: ";
        cin >> hours;
        employees[i].setHoursWorked(hours);
    }

    cout << "\n\n========== Weekly Payroll Report ==========\n";

    for (int i = 0; i < 7; i++)
    {
        employees[i].displayEmployeeData(i + 1);
    }

    return 0;
}
