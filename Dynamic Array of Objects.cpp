#include <iostream>
using namespace std;
//Dynamic Array of Objects

class Student{
    public:
    string name;
    int age;
    
    Student(string n = "", int a = 0){
        name = n;
        age = a;
    }
    
    void display(){
        cout << "Name: " << name << "\tAge: " << age << endl;
    }
};

int main(){
    
    int size;
    
    cout << "Enter size: ";
    cin >> size;
    
    // Dynamically allocate an array of Student objects
    Student* students = new Student[size];
    
    for(int i = 0; i<size; i++){
        cout <<"Enter name and age of student "<<i+1<<" : ";
        cin >> students[i].name>>students[i].age;
    }
    
    for (int i = 0; i < size; i++) {
        students[i].display();
    }

    // Deallocate memory
    delete[] students;
    
    return 0;
}