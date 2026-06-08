#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    void setFeet(int f)
    {
        feet = f;
    }

    void setInches(float i)
    {
        feet += (i / 12);
        inches = i - (i / 12) * 12;
    }

    void showDistance()
    {
        cout << "Distance = " << feet << " feet " << inches << " inches" << endl;
    }
};

int main()
{
    Distance d1;
    int ft;
    float in;

    cout << "Enter feet: ";
    cin >> ft;

    cout << "Enter inches: ";
    cin >> in;

    d1.setFeet(ft);
    d1.setInches(in);

    d1.showDistance();

    return 0;
}
