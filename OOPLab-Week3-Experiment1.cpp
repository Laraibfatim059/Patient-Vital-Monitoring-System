#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int month, day, year;

public:
    Date(int m, int d, int y)
    {
        while (m < 1 || m > 12)
        {
            cout << "Invalid month. Enter month (1-12): ";
            cin >> m;
        }

        while (d < 1 || d > 31)
        {
            cout << "Invalid day. Enter day (1-31): ";
            cin >> d;
        }

        month = m;
        day = d;
        year = y;
    }

    void printNumeric() const
    {
        cout << month << "/" << day << "/" << year << endl;
    }

    void printMonthDayYear() const
    {
        string months[] = {
            "", "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };

        cout << months[month] << " " << day << ", " << year << endl;
    }

    void printDayMonthYear() const
    {
        string months[] = {
            "", "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };

        cout << day << " " << months[month] << " " << year << endl;
    }
};

int main()
{
    int month, day, year;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter year: ";
    cin >> year;

    Date date(month, day, year);

    cout << "\nDate in numeric form:\n";
    date.printNumeric();

    cout << "Date in month-day-year form:\n";
    date.printMonthDayYear();

    cout << "Date in day-month-year form:\n";
    date.printDayMonthYear();

    return 0;
}
