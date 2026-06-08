#include <iostream>
#include <iomanip>
using namespace std;

class Travel
{
private:
    int kilometer;
    int hour;

public:
    Travel()
    {
        kilometer = 0;
        hour = 0;
    }

    void input()
    {
        cout << "Enter distance in kilometers: ";
        cin >> kilometer;

        cout << "Enter time in hours: ";
        cin >> hour;
    }

    void showTable(Travel p)
    {
        cout << "\nObject\t\tKilometer\tHour\n";
        cout << "----------------------------------------\n";

        cout << "t1\t\t" << kilometer << "\t\t" << hour << endl;
        cout << "t2\t\t" << p.kilometer << "\t\t" << p.hour << endl;
        cout << "Added Result\t" << kilometer + p.kilometer
            << "\t\t" << hour + p.hour << endl;
    }
};

int main()
{
    Travel t1, t2;

    cout << "Enter details for first travel object:\n";
    t1.input();

    cout << "\nEnter details for second travel object:\n";
    t2.input();

    t1.showTable(t2);

    return 0;
}
