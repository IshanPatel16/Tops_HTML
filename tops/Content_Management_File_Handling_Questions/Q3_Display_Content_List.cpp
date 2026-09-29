#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("content_list.txt");

    if (!file) {
        cout << "Error: Could not open content_list.txt." << endl;
        return 1;
    }

    string line;
    int number = 1;

    cout << "\nContent Ideas" << endl;
    cout << "-------------" << endl;

    while (getline(file, line)) {
        size_t first = line.find('|');

        if (first != string::npos) {
            string title = line.substr(0, first);
            string remaining = line.substr(first + 1);

            size_t second = remaining.find('|');

            if (second != string::npos) {
                string platform = remaining.substr(0, second);

                cout << number << ". " << title
                     << " - " << platform << endl;
                number++;
            }
        }
    }

    if (number == 1) {
        cout << "No content ideas found." << endl;
    }

    file.close();

    return 0;
}
