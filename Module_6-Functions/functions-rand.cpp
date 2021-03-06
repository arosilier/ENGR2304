// ENGR 2304 - Class Example 
// Week 6 - Functions
//
// functions-rand.cpp
// This program illustrates how to use rand() to pick random numbers (basic version)

#include <iostream> 
#include <cstdlib>  // required for rand()

using namespace std;

int main() {
  int i, number;

  cout << "FYI the value of RAND_MAX on your system is " << RAND_MAX << endl;

  for (i=0; i<10; i++) {
     number = rand();
     cout << "The random number you got is " << number << endl;
  }

}