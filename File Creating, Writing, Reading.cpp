#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ofstream file ("abc.txt");  // Creates and open the file
    
    // Writes to the file
    file << "This is Ajmal Hussain, a C++ enthusiast.\n";
    file << "Set up push notifications or calendar events to stay on track for your learning goals.\n";
    file << "Hello everyone! I'm Ajmal, aspiring MERN stack from Rai University Ahmedabad.\n";
    file << "Files can be tricky, but it is fun enough!\n";
    
    
    // Read from the text file
    ifstream read ("abc.txt");
    
    if (!read) {
        cout << "File not found.\n";
        return 0;
    }
      
    // Close the file
    file.close();
    
    cout << "Content of abc.txt:\n";
    
    // Create a string, which is used to output the text file
    string line;
    // Use a while loop together with the getline() function to read the file line by line
    while (getline (read, line)) {  
        // Output the text from the file
        cout << line << endl;
    }
    
    // Close the file
    file.close();
    
    return 0;
}

/*
    Always close after writing.
    Always close before reading.
*/