#include <iostream>
using namespace std;

// Polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.

class Marks {
    int intmark;
    int extmark;
    
public:
    
    // Default constructor
    Marks () : intmark(0), extmark(0) {}
    
    void input() {
        cout << "Internal marks: ";
        cin >> intmark;
        cout << "External marks: ";
        cin >> extmark;
    }
    
    // Display function to show Internal & External marks
    void display() {
        cout << "Internal marks: " << intmark << endl;
        cout << "External marks: " << extmark << endl;
    }
    
    // Overload '+' operator		(Adding internal and external marks)
    Marks operator + (Marks obj) {
    	
        Marks temp;
        
        temp.intmark = intmark + obj.intmark;
        temp.extmark = extmark + obj.extmark;
        
        return temp;
    } 
};

// Main program

int main() {
    
    Marks m1, m2, res;
    
    cout << "First Student Marks\n";
    m1.input();
    
    cout << "\n";
    
    cout << "Second Student Marks\n";
    m2.input();
    
    // Adding Internal & External marks for both students respectively
    res = m1 + m2;
    
    res.display();
    
    return 0;
}