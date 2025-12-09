// Module 4Part2: Debbaging and logic.
// In this assignment, I'm building a simple menu using if and else-if.
// Each choice prints a message, and one option has a nested menu to practice more logic.


#include <iostream>
using namespace std;
int main() {    
    float n1 ,n2 ,n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n1 >> n3;
    if(n1 >= n2){
        if(n1 >= n3 ){
        cout << "Largest number: " << n1<< endl;
      
    } else{
    cout << "Largest number: " << n3<< endl;
    }
} else{
    if(n2 >= n3){
        cout << "Largest number: " << n2<< endl;
    } else {
        cout << "Largest number: " << n3 << endl;
    }
}
  
    return 0;
}
/*
nit/Desktop/CIS 25/" && g++ Week6_M4Part2.cpp -o
 Week6_M4Part2 && "/Users/sefanit/Desktop/CIS 25
/"Week6_M4Part2
Enter three numbers: 8 9 2
Largest number: 9
sefanit@Sefanits-Mac
*/