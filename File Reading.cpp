 
#include <iostream> 
#include <fstream> 
 
int main() { 
   
    std::ifstream inputFile("Sigma.txt"); // Open file for reading 
    if (inputFile.is_open()) { 
        std::string line; 
        while (getline(inputFile, line)) { 
            std::cout << line << std::endl; // Display file content 
        } 
        inputFile.close(); // Close file 
    } 
    return 0; 
}