#include <iostream>
#include <string>
using namespace std;

class Movie {
private:
    string title;
    string director;
    int year;

public:
    Movie(string t, string d, int y) {
        title = t;
        director = d;
        year = y;
    }

    // Copy constructor
    Movie(const Movie &other) {
        title = other.title;
        director = other.director;
        year = other.year;
    }

    void displayInfo() const {
        cout << "Title: " << title << endl;
        cout << "Director: " << director << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Movie original("Inception", "Christopher Nolan", 2010);
    Movie copied(original);

    cout << "Original Movie:" << endl;
    original.displayInfo();

    cout << "\nCopied Movie:" << endl;
    copied.displayInfo();

    return 0;
}
