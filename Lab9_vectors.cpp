// Lab9_vectors.cpp
// This program shows some simple vector examples, and asks for simple tasks.
// Reference: Lippman, section 3.3

// Author: Luis Rivera

// IMPORTANT NOTE: YOU MAY NEED TO COMPILE ADDING THE FOLLOWING FLAG: -std=c++11
// Example: g++ Lab9_vectors.cpp -o Lab9_vectors -std=c++11
// Some initialization methods and other things are not supported by the old standard.

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// Main function. Shows a few examples. Complete the assignments stated in the comments.
int main()
{
	vector<int> ivec1(5), ivec2;
	vector<double> dvec1{5.1}, dvec2(5,1.5);
	vector<string> svec1 = {"hello", "world"};
	// vector<myClass> myCvec;	// you can have vectors of objects
	// in general: vector<Type> vec;	// vector is a template

	for(int i = 0; i < ivec1.size(); i++)
		cout << ivec1[i] << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:ivec1)	// This is equivalent to the above for loop
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:dvec1)
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:dvec2)
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:svec1)
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
		
	cout << "Original size: " << ivec2.size() << endl;
	ivec2.push_back(50);
	cout << "New size: " << ivec2.size() << "\nAdded element: " << ivec2[0] << endl;
	cout << "\n------------------------------------------------------------------" << endl;
		
// ***********************************************************************
// Try all the wasy to initializa a vector shown in Table 3.4. Use the
// vectors above and/or declare new vectors.
// Some of those operations have already been used, but write your
// own examples.

// Do exercises 3.14 (read sequence of ints and store in vector) and 
	cout << "*****Excercise 3.14*****" << endl << endl;
	int input=1;
	vector <int> ivec3; //empty vector
	cout << "Enter a list of integers (0 to quit ENTER to enter next int):" << endl;
	while(input!=0){
		cin >> input;
		if(input != 0)
			ivec3.push_back(input);
	}
	cout << "Vector: " << endl;
	for(auto i:ivec3){
		cout << i << " ";
	}
	cout << endl;
//3.15 from Lippman (read series of strings and store in vector)
	cout << "*****Excercise 3.15*****" << endl << endl;
	string s1, tmp;
	vector <string> svec15; //empty vector
	cout << "Enter several words, end with '&':" << endl;
	getline(cin, s1, '&');
	istringstream iss(s1);
	while(getline(iss, tmp, ' ')){
		svec15.push_back(tmp);
	}
	cout << "Vector: " << endl;
	for(auto s:svec15)
			cout << s << " ";
	cout << endl;
//Try all the vector operations shown in table 3.5. Use the vectors above
// or define new ones. Try different types.
// ***********************************************************************

	return 0;
}