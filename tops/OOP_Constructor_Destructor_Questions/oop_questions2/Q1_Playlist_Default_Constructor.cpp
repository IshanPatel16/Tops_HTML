#include <iostream>
#include <string>
using namespace std;

class Playlist {
private:
    string playlistName;

public:
    Playlist() {
        playlistName = "My Favourites";
        cout << "Welcome to your playlist: " << playlistName << endl;
    }
};

int main() {
    Playlist myPlaylist;
    return 0;
}
