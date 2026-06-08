#include <iostream>
using namespace std;

class Capital
{
private:
    static int count;

public:
    Capital()
    {
        count++;
        cout << "Object created.\n";
    }

    void show()
    {
        cout << "Total objects created so far: " << count << endl;
    }
};

int Capital::count = 0;

int main()
{
    Capital x;
    x.show();

    Capital y;
    y.show();

    Capital z;
    z.show();

    return 0;
}
