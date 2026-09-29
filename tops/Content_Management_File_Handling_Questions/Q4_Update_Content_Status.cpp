#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

struct Content {
    string title;
    string platform;
    int views;
    string status;
};

// Read all content from the file
vector<Content> readContent() {
    vector<Content> contents;

    ifstream file("content_list.txt");

    if (!file) {
        cout << "Error: content_list.txt could not be opened." << endl;
        return contents;
    }

    string line;

    while (getline(file, line)) {
        string title;
        string platform;
        string viewsText;
        string status;

        stringstream ss(line);

        getline(ss, title, '|');
        getline(ss, platform, '|');
        getline(ss, viewsText, '|');
        getline(ss, status, '|');

        if (!title.empty() && !viewsText.empty()) {
            Content item;

            item.title = title;
            item.platform = platform;
            item.views = atoi(viewsText.c_str());
            item.status = status;

            contents.push_back(item);
        }
    }

    file.close();

    return contents;
}

// Display all content ideas
void displayContent(const vector<Content>& contents) {
    cout << "\n========== CONTENT LIST ==========" << endl;

    if (contents.empty()) {
        cout << "No content ideas found." << endl;
    }
    else {
        size_t i;

        for (i = 0; i < contents.size(); i++) {
            cout << i + 1 << ". "
                 << contents[i].title
                 << " | Platform: " << contents[i].platform
                 << " | Views: " << contents[i].views
                 << " | Status: " << contents[i].status
                 << endl;
        }
    }

    cout << "==================================" << endl;
}

// Save all content back to the file
void saveContent(const vector<Content>& contents) {
    ofstream file("content_list.txt");

    if (!file) {
        cout << "Error: Could not open content_list.txt for writing." << endl;
        return;
    }

    size_t i;

    for (i = 0; i < contents.size(); i++) {
        file << contents[i].title << "|"
             << contents[i].platform << "|"
             << contents[i].views << "|"
             << contents[i].status << endl;
    }

    file.close();
}

int main() {
    vector<Content> contents;
    contents = readContent();

    if (contents.empty()) {
        cout << "There are no content ideas to update." << endl;
        return 0;
    }

    displayContent(contents);

    int choice;

    cout << "\nEnter the content number whose status you want to update: ";
    cin >> choice;
    cin.ignore();

    if (choice < 1 || choice > (int)contents.size()) {
        cout << "Invalid content number." << endl;
        return 0;
    }

    string newStatus;

    cout << "Enter the new status: ";
    getline(cin, newStatus);

    contents[choice - 1].status = newStatus;

    saveContent(contents);

    cout << "\nStatus updated successfully!" << endl;

    displayContent(contents);

    return 0;
}
