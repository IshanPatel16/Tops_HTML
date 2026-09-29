#include <iostream>
#include <string>
using namespace std;

class Content {
private:
    string title;
    string platform;
    int views;
    string status;

public:
    Content(string t, string p, int v, string s) {
        title = t;
        platform = p;
        views = v;
        status = s;
    }

    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Platform: " << platform << endl;
        cout << "Views: " << views << endl;
        cout << "Status: " << status << endl;
    }
};

int main() {
    Content content("C++ OOP Tutorial", "YouTube", 1500, "Planned");

    cout << "Content Details" << endl;
    cout << "----------------" << endl;
    content.displayDetails();

    return 0;
}
