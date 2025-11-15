#include<iostream>
#include<string>
//Concatenate String
using namespace std;


int main() {
    
    
    //Using + operator
    
    string firstName = "Alauddin";
    
    string lastName = "Khilzi";

    string fullName = firstName +" "+ lastName;
   
    cout<<fullName <<"\n";		//output: Alauddin Khilzi
    
    
    //Using .append()
    
    string str1 = "Hello ";
    
    string str2 = "Wonderful World";
    
    
    
    // Variant 1: Append entire string
    str1.append(str2);
    cout << str1 << endl;       // Output: Hello Wonderful World

    // Variant 2: Append substring
    str1.append(str2, 10, 15);	// Appends "World"
    cout << str1 << endl; 		// Output: Hello Wonderful WorldWorld

    // Variant 3: Append C-string
    str1.append(" of C++");
    cout << str1 << endl; 		// Output: Hello Wonderful WorldWorld of C++

    // Variant 4: Append part of a C-string
    str1.append(" Language", 5); // Appends " Lang"
    cout << str1 << endl; 		// Output: Hello Wonderful WorldWorld of C++ Lang
    
    // Variant 5: Append character multiple times
    str1.append(3, '!');
    cout << str1 << endl; 		// Output: Hello Wonderful WorldWorld of C++ Lang!!!
    
    
    
    
    
    //Note: The append() function modifies the original string.
    
    
    return 0;
}