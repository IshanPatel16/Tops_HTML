#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("insta_followers.txt");

    if (!file) {
        cout << "Error: Could not open insta_followers.txt." << endl;
        return 1;
    }

    string username;
    int count = 0;

    // Read one username at a time.
    // No array or vector is used.
    while (getline(file, username)) {
        if (!username.empty()) {
            count++;
        }
    }

    file.close();

    cout << "Total followers listed: " << count << endl;

    return 0;
}
