#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    char choice;

    do {
        string title, platform, status;
        int views;

        cout << "\nEnter content title: ";
        getline(cin, title);

        cout << "Enter platform: ";
        getline(cin, platform);

        cout << "Enter views: ";
        cin >> views;
        cin.ignore();

        cout << "Enter status: ";
        getline(cin, status);

        ofstream file("content_list.txt", ios::app);

        if (!file) {
            cout << "Error: Could not open content_list.txt." << endl;
            return 1;
        }

        // Store fields separated by '|'.
        file << title << "|" << platform << "|" << views << "|" << status << endl;
        file.close();

        cout << "Content idea saved successfully." << endl;

        cout << "Add another content idea? (y/n): ";
        cin >> choice;
        cin.ignore();

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
