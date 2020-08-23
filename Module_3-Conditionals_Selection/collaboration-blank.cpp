/*----------------------------------------------------*/
/* Class: ENGR-2304                                   */
/* This is our first collaborative program!           */
/*                                                    */
/*----------------------------------------------------*/

// Preprocessor directives
#include <iostream>  //Required for cout
#include <iomanip>   // Required for manipulators

// Using directive
using namespace std;

// Here are the rules... each class member must contribute one scenario to our "What to Wear"
// program. Each scenario must:
//   - integrate to the existing code properly with respect to both syntax and formatting
//     (pay attention to brackets and indentation!)
//   - offer clothing advice for a specific range of temperatures (must not conflict
//     with existing entries)
//   - must include your name in a comment indicating which is your contribution
//   - only make changes in the designated area
//   - copy the code over to your favorite IDE to test and make sure the program runs
//  If you find errors in another students' contribution, you can provide advice to fix
//  it within a comment, but do not change their code

// Main function
int main()
{

	// Declarations
	int temp_in_F = 0;

	// Welcome & get the temperature from the user
	cout << "Welcome to What to Wear!" << endl;
	cout << "What is the current temperature? (whole number degrees F only please)" << endl;
	cin >> temp_in_F;

    // Offer advice on what to wear based on the current temperature
    
    if (temp_in_F > 120 && temp_in_F < 130) { // Started by Prof Rosilier
    
    	printf("You must be in Arizona! Definitely swimsuit weather!");  
    
    // ************ Do not modify anything above this line **************
    
    
    // insert your advice here!
    

	// ************ Do not modify anything below this line **************  

	} else {
        
		cout << "I got nothing... try again." << endl;
		
	}
  

	// Exit program
	return 0;
}
/*----------------------------------------------------*/