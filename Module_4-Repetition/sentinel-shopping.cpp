// ENGR 2304 - Mini Program
// Module 4 - Repetition
//
// sentinel-shopping.cpp
// Your job in this mini program is to complete the missing section to make 
// the program function properly. The starter code will ask the user to enter 
// their budget for a shopping trip, and then ask them to enter the price for 
// each item in their shopping basket. The program will  add up the total of 
// all items in the cart, and alert the user when they have met or exceeded 
// their budget for the trip.

#include <iostream>
#include <iomanip>

using namespace std;

// main() function
int main() {

    // Declare variables
    double budget = 0;
    double total = 0;
    double item = 0;
    
    // configure output to 2 decimal places 
    cout << fixed << setprecision(2);
    
    // Ask the user to enter their shopping budget
    cout << "Hello, there! What is your budget for this shopping trip?" << endl;
    cin >> budget;
    cout << "Great! Tell me how much each item in your basket costs, ";
    cout << "and I'll tell you when your $" << budget << " budget is used up!" << endl;
    
    do {
    
    	cout << "\nitem cost: ";
    	cin >> item;
    	
    	total += item;
    	cout << "total spent so far: $" << total << endl;
    	
    } while ( 1 );
    // TO DO: Change the line above to stop the repetition once the total spent
    // is equal to or greater than the budget amount
    
    if (total == budget) {
    	cout << "You nailed your budget! Time to check out now!";
    } else {
        cout << "Whoops! That last item was too much! You'd better put that back and check out now!";
    }
    
    return 0;
}
