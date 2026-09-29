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

class Podcaster : public SocialMediaUser {
private:
    string podcastName;

public:
    Podcaster(string username, int followers, string podcastName)
        : SocialMediaUser(username, followers) {
        this->podcastName = podcastName;
    }

    void publishEpisode(string episodeTitle) {
        cout << "Episode " << episodeTitle << " published on " << podcastName << endl;
    }
};

int main() {
    Podcaster podcaster("Sam", 8000, "Tech Talks");
    podcaster.displayProfile();
    podcaster.publishEpisode("The Future of AI");
    return 0;
}
