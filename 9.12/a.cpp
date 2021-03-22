#include <iostream> 
 #include <array> // for std::size()
 using namespace std;
 int main() {
 	// An array, name, was decleared that takes a string "Bob".
 	// The length of the array is 4. Why? Because C++ recognise "Bob" as "Bob\0". 
 	char name[] {"Bob"};
 	cout << "Length = " << size(name) << endl;
 	cout << "Name   = " << name << endl;
 }