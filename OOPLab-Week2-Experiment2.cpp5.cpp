#include <iostream>
#include <cstdio>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    Date d;
    int maxDays;

    while (true) {
        cout << "Enter date (DD/MM/YYYY): ";
        scanf_s("%d/%d/%d", &d.day, &d.month, &d.year);

        if (d.month < 1 || d.month > 12) {
            cout << "Invalid month\n";
            continue;
        }
        // Feburary has either 29 or 28 days 
        if (d.month == 2) {
            if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0))
                maxDays = 29;
            else
                maxDays = 28;
        }
        // for months with 30 days
        else if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11) {
            maxDays = 30;
        }
        // months with 31 days
        else {
            maxDays = 31;
        }

        if (d.day < 1 || d.day > maxDays) {
            cout << "Invalid day\n";
            continue;
        }

        break;
    }

    cout << "Date: ";
    cout << d.day << "/" << d.month << "/" << d.year;

    return 0;
}
