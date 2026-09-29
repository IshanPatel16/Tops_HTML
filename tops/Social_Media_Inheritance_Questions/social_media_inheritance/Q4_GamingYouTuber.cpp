#include <iostream>
#include <string>
using namespace std;

class SocialMediaUser {
protected:
    string username;
    int followers;

public:
    SocialMediaUser(string username, int followers) {
        this->username = username;
        this->followers = followers;
    }

    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

class YouTuber : public SocialMediaUser {
protected:
    string channelName;

public:
    YouTuber(string username, int followers, string channelName)
        : SocialMediaUser(username, followers) {
        this->channelName = channelName;
    }

    void uploadVideo(string title) {
        cout << "Video " << title << " uploaded to " << channelName << endl;
    }
};

class GamingYouTuber : public YouTuber {
public:
    GamingYouTuber(string username, int followers, string channelName)
        : YouTuber(username, followers, channelName) {}

    void streamGame(string gameName) {
        cout << username << " is now streaming " << gameName
             << " on " << channelName << endl;
    }
};

int main() {
    GamingYouTuber gamer("Alex", 25000, "Alex Gaming");
    gamer.displayProfile();
    gamer.uploadVideo("Best Gaming Moments");
    gamer.streamGame("Minecraft");
    return 0;
}
