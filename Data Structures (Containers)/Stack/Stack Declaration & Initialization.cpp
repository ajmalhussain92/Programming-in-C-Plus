#include <iostream>
#include <stack>
using namespace std;

int main() {
	
	
	// Declaration
    
	stack<int> S;
    
	// You cannot Initialize (add elements to) the stack at the time of declaration, like vectors
    
	
	
	// Add Elements : Use the 'push()' function, after declaring the stack
	
	S.push(1);
    S.push(3);
    S.push(7);
    S.push(2);
    S.push(5);
	
	
	// Access Stack Elements : You cannot access stack elements by referring to index numbers, like arrays and vectors
    // In a stack, you can only access the top element, which is done using the 'top()' function
	
	cout << S.top() << endl;
	
	
	// Access all elements by popping
    while (!S.empty()) {
        cout << S.top() << endl;
        S.pop();
    }
	
	
	
	// Create a stack of strings called cars
	
	stack<string> cars;
	
	
	// Add Elements
	
	cars.push("Volvo");
	cars.push("BMW");
	cars.push("Ford");
	cars.push("Mazda");
	
	
	
	// Remove Elements : // Remove the last added element (Mazda)
	
	cars.pop();
	
	
	
	// Access the top element (Now Ford)
	
	cout << cars.top() << endl;
	
	
	// Change the Top Element
	
	cars.top() = "Suzuki";
	
	
	// Size of the Stack : Same as Vector using 'size()' function
	
	cout << cars.size() << endl;
	
	
	
	// Check if the Stack is Empty : Use 'empty()' function
    
    cout << cars.empty() << endl; // Outputs 0 (not empty) 
    

    return 0;
}