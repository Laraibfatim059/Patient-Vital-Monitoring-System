#include <iostream>
using namespace std;

class Room {
private:
    double width;

public:
    void setWidth(double w) {
        width = w;
    }

    friend void printWidth(Room r);
};

void printWidth(Room r) {
    cout << "Width of the room is: " << r.width << endl;
}

int main() {
    Room myRoom;
    myRoom.setWidth(10.10);
    printWidth(myRoom);

    return 0;
}
