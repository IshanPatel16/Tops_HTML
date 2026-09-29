#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ofstream outFile("wishlist.txt");

    if (!outFile) {
        cout << "Error: Could not create wishlist.txt." << endl;
        return 1;
    }

    string productName;
    double price;

    cout << "Enter details for 3 wishlist products:" << endl;

    for (int i = 1; i <= 3; i++) {
        cout << "\nProduct " << i << " name: ";
        getline(cin, productName);

        cout << "Product " << i << " price: Rs. ";
        cin >> price;
        cin.ignore();

        outFile << productName << "|" << fixed << setprecision(2) << price << endl;
    }

    outFile.close();

    // Read the saved wishlist and display it.
    ifstream inFile("wishlist.txt");

    if (!inFile) {
        cout << "Error: Could not read wishlist.txt." << endl;
        return 1;
    }

    cout << "\n--- Wishlist ---" << endl;

    string line;
    while (getline(inFile, line)) {
        size_t separator = line.find('|');

        if (separator != string::npos) {
            string name = line.substr(0, separator);
            string priceText = line.substr(separator + 1);

            cout << "Product: " << name
                 << " | Price: Rs. " << priceText << endl;
        }
    }

    inFile.close();

    return 0;
}
