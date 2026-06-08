#include <iostream>
#include <cstdio> 
using namespace std;

struct Date {
    int month;
    int day;
    int year;
};

int main() {
    Date d;
    while (true) {
        printf("Enter date (MM/DD/YYYY): ");
        scanf_s("%d/%d/%d", &d.month, &d.day, &d.year);

        // Validation for day and month
        if (d.month >= 1 && d.month <= 12 &&
            d.day >= 1 && d.day <= 31 &&
            d.year > 0) {
            break; 
        }
        else {
            printf("Invalid date! Please enter again.\n");
        }
    }

    printf("\nDate is: %d/%d/%d\n", d.month, d.day, d.year);

    return 0;
}
