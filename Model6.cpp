#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Item {
public:
    string name;   
    int quantity;      
    void saveToFile() {
        ofstream out("items.txt");

        if (out.is_open()) {
            out << name << "," << quantity << endl;
            out.close();
            cout << "Item saved to file." << endl;
        } else {
            cout << "Unable to open file for writing." << endl;
        }
    }

    void loadFromFile() {
        ifstream in("items.txt");

        if (in.is_open()) {
            string line;
            while (getline(in, line)) {
                cout << "File content: " << line << endl;
            }
            in.close();
        } else {
            cout << "Unable to open file for reading." << endl;
        }
    }
};

int main() {
    Item tool;
    tool.name = "Screwdriver";
    tool.quantity = 10;

    tool.saveToFile();


    tool.loadFromFile();

    return 0;
}
/*
/" && g++ Model6.cpp -o Model6 && "/Users/sefanit/Desktop/CIS 25/"
Model6
Item saved to file.
File content: Screwdriver,10
sefanit@Sefanits-MacBook-Pro CIS 25 %

*/