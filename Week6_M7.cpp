// Module 7: Pointers and Memory
// In this program, I'm practicing structs, pointers, dynamic memory,
// and binary search. The goal is to store a bunch of items and search for one by ID.

#include <iostream>
#include <string>
using namespace std;

// Struct for each item (just a name and an ID)
struct Item {
    string name;
    int id;
};

// This function fills the array with fake data so we can test the search.
// I'm just naming them Item1, Item2, ....., Item100.
void populateInventory(Item* inventory, int size) {
    for (int i = 0; i < size; i++) {
        inventory[i].id = i + 1;                     // IDs go 1 to size
        inventory[i].name = "Item" + to_string(i+1); // simple item names
    }
}

// Binary search to look for an item by its ID.
// If we find it, return its index. If not, return -1.
int binarySearch(Item* inventory, int size, int searchId) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // Check the middle item
        if (inventory[mid].id == searchId) {
            return mid; // found it!
        }
        else if (searchId < inventory[mid].id) {
            high = mid - 1; // look on the left
        }
        else {
            low = mid + 1;  // look on the right
        }
    }

    return -1; // not found
}

int main() {
    const int SIZE = 100; // at least 100 items like the instructions said

    // Creating a dynamic array using new (heap memory)
    Item* inventory = new Item[SIZE];

    // Fill the array with sample data so the search works
    populateInventory(inventory, SIZE);

    int searchId;
    cout << "Enter an ID to search for (1-" << SIZE << "): ";
    cin >> searchId;

    // Call binary search function
    int index = binarySearch(inventory, SIZE, searchId);

    // Display the result
    if (index != -1) {
        cout << "\nItem found!\n";
        cout << "Name: " << inventory[index].name << endl;
        cout << "ID: " << inventory[index].id << endl;
        cout << "Index in array: " << index << endl;
    } else {
        cout << "\nSorry, no item with that ID.\n";
    }

    // Must free the dynamic memory or it stays in the heap
    delete[] inventory;

    return 0;
}
/*
// Module 6: Strings, Classes, and File Input/Output
// I'm practicing how to make a class with string and int members.
// I save the item to a text file and also read it back using file I/O.

*/