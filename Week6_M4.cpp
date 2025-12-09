// Module 4: Debugging and Logic
// This module is about fixing errors and using if-statements.
// I'm checking which of three numbers is the largest by using nested if-statements.


#include <iostream>
using namespace std;

int main() {
    int choice;

    
    cout << "====   Menu  ======\n";
    cout << "1. Add Item\n";
    cout << "2. View Items\n";
    cout << "3. Settings\n";
    cout << "4. Exit\n";
    cout << "Choose an option : ";

    cin >> choice; 


    if (choice == 1) {
        cout << "Item added successfully!\n";
    }
    else if (choice == 2) {
        cout << "Showing all items\n";
    }
    else if (choice == 3) {

        // Nested if-statement
        int settingChoice;
        cout << "\n--- Setting Menu --\n";
        cout << "1 . Enable notifications\n";
        cout << " 2. Disable notifications\n";
        cout << " Choose an option: ";
        cin >> settingChoice;

        if (settingChoice == 1) {
            cout << "Notifications turned ON.\n" ; 

        }
        else if (settingChoice == 2) {
            cout << "Notifications turned OFF.\n";
        }
        else {
            cout << "Invalid settings option.\n" ;
        }
    }
    else if (choice == 4) {
        cout << "Exiting program...\n";
    }
    else {
        cout << "Invalid option.\n";
    }

    return 0;
}


/*Desktop/CIS 25/"Week6_M4
====   Menu  ======
1. Add Item
2. View Items
3. Settings
4. Exit
Choose an option : 1
Item added successfully!

*/
