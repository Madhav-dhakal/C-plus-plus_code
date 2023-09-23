/*Create a program that reads two integers and performs division. Implement exception handling to catch divide-by-zero errors
 and display appropriate error messages. Demonstrate the program with both valid and invalid inputs. */
#include <iostream>
using namespace std;
#include <stdexcept>

int main() {
    int numerator, denominator;
    
    try {
        cout << "Enter numerator: ";
        cin >> numerator;
        
        cout << "Enter denominator: ";
        cin >> denominator;
        
        if (denominator == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }
        else{
		
        int result = numerator / denominator;
        cout << "Result of division: " << result << endl;}
    }
     catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
