#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    float price;

public:

    Product(int i, string n, float p) : id(i), name(n), price(p) {
        cout << "Constructor called" << endl;
    }

    
    ~Product() {
        cout << "Destructor called" << endl;
    }

    void printDetails() const {
        cout << "ID: " << id 
             << ", Name: " << name 
             << ", Price: $" << price 
             << endl;
    }
};

int main() {
    Product p(101, "Notebook", 4.99);

    p.printDetails();

    return 0;
}
/*
/" && g++ Module11.cpp -o Module11 && "/Users/sefanit/Desktop/CIS 
25/"Module11
Constructor called
ID: 101, Name: Notebook, Price: $4.99
Destructor called
sefanit@Sefanits-MacBook-Pro CIS 25 % 
*/
