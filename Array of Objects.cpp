#include <iostream>
using namespace std;
//Array of Objects

class Student{
    public:
    string name, u_id;
    float cgpa;
    int age;
    
    Student(){
        name = "";
        u_id = "";
        cgpa = 0;
        age = 0;
    }
    
    void inputDetails(int i){
        cout << "Enter details for student " << i << endl;
        cout << "Name: ";
        cin >> name;
        cout << "UID: ";
        cin >> u_id;
        // getline(cin, u_id);
        
        cout << "CGPA: ";
        cin >> cgpa;
        cout << "Age: ";
        cin >> age;
    }
    
    static void displayStudents(Student students[], int n){
        cout << "\nName\t\tUID\t\tCGPA\tAge\n";
        for(int i = 0; i < n; i++){
            cout << students[i].name << "\t\t"
                 << students[i].age << "\n";
        }
    }
};

int main(){
    int n; 
    cout << "Enter number of students: "; 
    cin >> n;
    Student students[n];
    
    // Input process details 
    // for (int i = 0; i < n; i++) { 
    //     students[i].inputDetails(i + 1); 
    // } 
    
    // Student::displayStudents(students, n);
    
    cout << students[0].u_id;
    // cout << students[0].age;
    
    return 0;
}