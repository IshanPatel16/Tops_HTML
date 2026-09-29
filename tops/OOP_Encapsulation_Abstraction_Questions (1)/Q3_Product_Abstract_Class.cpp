#include <iostream>
using namespace std;

class Product {
public:
    virtual void upload() = 0; // Pure virtual function (abstract method)

    virtual ~Product() {}
};

class Electronics : public Product {
public:
    void upload() override {
        cout << "Electronics product uploaded to Flipkart." << endl;
    }
};

class Clothing : public Product {
public:
    void upload() override {
        cout << "Clothing product uploaded to Flipkart." << endl;
    }
};

int main() {
    Electronics electronics;
    Clothing clothing;

    electronics.upload();
    clothing.upload();

    return 0;
}
