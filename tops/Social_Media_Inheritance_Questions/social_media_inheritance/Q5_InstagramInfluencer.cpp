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

class InstagramInfluencer : public SocialMediaUser {
public:
    InstagramInfluencer(string username, int followers)
        : SocialMediaUser(username, followers) {}

    void postStory(string storyTitle) {
        cout << username << " posted a new story: " << storyTitle << endl;
    }
};

int main() {
    InstagramInfluencer influencer("Maya", 12000);
    influencer.displayProfile();
    influencer.postStory("A Day in My Life");
    return 0;
}
