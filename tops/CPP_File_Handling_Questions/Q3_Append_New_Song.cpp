#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string newSong;

    cout << "Enter a new song name: ";
    getline(cin, newSong);

    ofstream file("my_fav_songs.txt", ios::app);

    if (!file) {
        cout << "Error: Could not open my_fav_songs.txt." << endl;
        return 1;
    }

    file << newSong << endl;
    file.close();

    cout << "New song added without overwriting the existing list." << endl;

    return 0;
}
