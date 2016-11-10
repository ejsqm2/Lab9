// Lab9_strings.cpp
// This program shows some simple string examples, and asks for simple tasks.
// Reference: Lippman, section 3.2

// Author: Luis Rivera

#include <iostream>
#include <string>

using namespace std;
using std::string;
// Main function. Shows a few examples. Complete the assignments stated in the comments.
int main()
{
	string s1, s2("Hello"), s3 = "World", s5;
	cout << "\nEnter a word:" << endl;
	cin >> s1; //operation of string
	cout << "Enter several words end with &: " << endl;
	getline(cin, s5, '&');
	cout << "s5: " << s5 << endl;
	string s4(s1);
	
	cout << s1 << endl
		 << s2 << endl
		 << s3 << endl
		 << s4 << endl;

// ***********************************************************************
// Try all the operations in Table 3.2 using the strings above and
// using new strings that you may declare.
// Some of those operations have already been used, but write your
// own examples.

	cout << "s1: " << s1 << endl;
	if(s2.empty())
		cout << "s2 is empty" << endl;
	else
		cout << "s2 is not empty" << endl;
	cout << "size of s3: " << s3.size();
	s1 = s2 + s3;
	cout << "s1+s2: " << s1 << endl;
	cout << "s5[4]: " << s5[4] << endl;
	string s6 = s4;
	if(s6==s4)
		cout << "s6 and s4 are equal" << endl;
	if(s6!=s2)
		cout << "s6 and s2 are not equal" << endl;
	if(s1[3] > s1[4])
		cout << "s1[3] has value " << s1[3] << " > s1[4] which is " << s1[4] << endl;
	else
		cout << "s1[3] has value " << s1[3] << " < s1[4] which is " << s1[4] << endl;
// ***********************************************************************

// -----------------------------------------------------------------------
// ***********************************************************************
// Use a "Range for" (Lippman, page 93) and operations in table 3.3 to:
// 1) change the case of the letters in your input line above (upper to
//    lowercase and vice-versa).
// 2) Replace any whitespace with a dot ('.').
// Print the converted text.
	string line;
	cout << "\nEnter some text, finish it with an &" << endl;
	getline(cin, line, '&');
	cout << line << endl;
	for(auto &c : line){//for every character in the string
		if(islower(c) != 0){//is lowercase
			c = toupper(c);//go to uppercase
		}
		else{
			c = tolower(c);//uppercase, so go to lowercase
		}
	}
	cout << "new line: " << line << endl;


	
// ***********************************************************************

	return 0;
}