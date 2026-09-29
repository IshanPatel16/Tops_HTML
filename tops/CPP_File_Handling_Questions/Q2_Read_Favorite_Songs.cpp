#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("my_fav_songs.txt");

    if (!file) {
        cout << "Error: Could not open my_fav_songs.txt." << endl;
        return 1;
    }

    string song;

    cout << "Favorite Songs:" << endl;

    while (getline(file, song)) {
        cout << song << endl;
    }

    file.close();

    return 0;
}
