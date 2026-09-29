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
private:
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

int main() {
    YouTuber creator("Alex", 15000, "Alex Gaming");
    creator.displayProfile();
    creator.uploadVideo("My First Gaming Video");
    return 0;
}
