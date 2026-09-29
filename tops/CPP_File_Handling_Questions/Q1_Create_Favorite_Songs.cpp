#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("my_fav_songs.txt");

    if (!file) {
        cout << "Error: Could not create the file." << endl;
        return 1;
    }

    file << "Perfect - Ed Sheeran" << endl;
    file << "Believer - Imagine Dragons" << endl;
    file << "Blinding Lights - The Weeknd" << endl;
    file << "Shape of You - Ed Sheeran" << endl;
    file << "Faded - Alan Walker" << endl;

    file.close();

    cout << "5 favorite songs have been written to my_fav_songs.txt" << endl;

    return 0;
}
