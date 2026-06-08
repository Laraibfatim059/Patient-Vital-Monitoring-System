#include <iostream>
#include <string>
using namespace std;

class Month
{
private:
    string name;
    int monthNumber;

    void updateName()
    {
        string months[12] = { "January", "February", "March", "April", "May", "June",
                             "July", "August", "September", "October", "November", "December" };
        name = months[monthNumber - 1];
    }

    void updateNumber()
    {
        string months[12] = { "January", "February", "March", "April", "May", "June",
                             "July", "August", "September", "October", "November", "December" };

        for (int i = 0; i < 12; i++)
        {
            if (name == months[i])
            {
                monthNumber = i + 1;
                return;
            }
        }

        monthNumber = 1;
        name = "January";
    }

public:
    Month()
    {
        monthNumber = 1;
        name = "January";
    }

    Month(string monthName)
    {
        name = monthName;
        updateNumber();
    }

    Month(int number)
    {
        if (number >= 1 && number <= 12)
            monthNumber = number;
        else
            monthNumber = 1;

        updateName();
    }

    void setName(string monthName)
    {
        name = monthName;
        updateNumber();
    }

    void setMonthNumber(int number)
    {
        if (number >= 1 && number <= 12)
            monthNumber = number;
        else
            monthNumber = 1;

        updateName();
    }

    string getName()
    {
        return name;
    }

    int getMonthNumber()
    {
        return monthNumber;
    }
     //overloading ++ operator
    Month& operator++()
    {
        monthNumber++;

        if (monthNumber > 12)
            monthNumber = 1;

        updateName();
        return *this;
    }

    Month operator++(int)
    {
        Month temp = *this;
        monthNumber++;

        if (monthNumber > 12)
            monthNumber = 1;

        updateName();
        return temp;
    }
    // overloading -- operator
    Month& operator--()
    {
        monthNumber--;

        if (monthNumber < 1)
            monthNumber = 12;

        updateName();
        return *this;
    }

    Month operator--(int)
    {
        Month temp = *this;
        monthNumber--;

        if (monthNumber < 1)
            monthNumber = 12;

        updateName();
        return temp;
    }
    // overloading cout "<<" operator
    friend ostream& operator<<(ostream& out, const Month& m)
    {
        out << m.name << " (" << m.monthNumber << ")";
        return out;
    }
    //overloading cin ">>" operator
    friend istream& operator>>(istream& in, Month& m)
    {
        cout << "Enter month name: ";
        in >> m.name;
        m.updateNumber();
        return in;
    }
};

int main()
{
    Month m1;
    Month m2("March");
    Month m3(12);

    cout << "Default constructor: " << m1 << endl;
    cout << "Constructor with name: " << m2 << endl;
    cout << "Constructor with number: " << m3 << endl;

    ++m3;
    cout << "\nAfter prefix ++ on m3: " << m3 << endl;

    m2++;
    cout << "After postfix ++ on m2: " << m2 << endl;

    --m1;
    cout << "After prefix -- on m1: " << m1 << endl;

    m3--;
    cout << "After postfix -- on m3: " << m3 << endl;

    Month userMonth;
    cin >> userMonth;
    cout << "You entered: " << userMonth << endl;

    return 0;
}
