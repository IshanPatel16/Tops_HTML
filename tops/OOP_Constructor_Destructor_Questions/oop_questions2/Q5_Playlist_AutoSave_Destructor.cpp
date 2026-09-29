#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Playlist {
private:
    string playlistName;

public:
    Playlist() {
        playlistName = "My Favourites";
        cout << "Playlist created: " << playlistName << endl;
    }

    ~Playlist() {
        ofstream file("autosave.txt");

        if (file.is_open()) {
            file << playlistName;
            file.close();
            cout << "Playlist auto-saved to autosave.txt" << endl;
        } else {
            cout << "Unable to save playlist." << endl;
        }
    }
};

int main() {
    Playlist myPlaylist;
    cout << "Playlist object is active." << endl;
    return 0; // Destructor runs automatically here
}
