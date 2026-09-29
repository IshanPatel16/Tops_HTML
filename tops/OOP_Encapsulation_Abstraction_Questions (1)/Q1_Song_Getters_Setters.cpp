#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;

public:
    void setTitle(string newTitle) {
        title = newTitle;
    }

    string getTitle() {
        return title;
    }

    void setArtist(string newArtist) {
        artist = newArtist;
    }

    string getArtist() {
        return artist;
    }
};

int main() {
    Song song;

    song.setTitle("Shape of You");
    song.setArtist("Ed Sheeran");

    cout << "Original Title: " << song.getTitle() << endl;
    cout << "Artist: " << song.getArtist() << endl;

    song.setTitle("Perfect");

    cout << "Updated Title: " << song.getTitle() << endl;

    return 0;
}
