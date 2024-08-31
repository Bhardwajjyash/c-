// C++ code to demonstrate the working of 
// advance() 
#include<iostream> 
#include<iterator> // for iterators 
#include<vector> // for vectors 
using namespace std; 
int main() 
{ 
	vector<int> ar = { 23, 2, 7, 6, 5 }; 
	
	// Declaring iterator to a vector 
	vector<int>::iterator ptr = ar.begin(); 
	
	// Using advance() to increment iterator position 
	// points to 4 
	
	
	// Displaying iterator position 
	cout << "The position of iterator after advancing is : "; 
	cout << *ptr << " "; 
	
	return 0; 
	
} 
