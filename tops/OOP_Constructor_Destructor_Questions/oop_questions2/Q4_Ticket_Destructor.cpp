#include <iostream>
using namespace std;

class Ticket {
public:
    Ticket() {
        cout << "Ticket booked successfully." << endl;
    }

    ~Ticket() {
        cout << "Saving your ticket..." << endl;
    }
};

int main() {
    Ticket *ticket = new Ticket();

    cout << "Ticket object is active." << endl;

    delete ticket;  // Calls the destructor
    cout << "Ticket object deleted." << endl;

    return 0;
}
