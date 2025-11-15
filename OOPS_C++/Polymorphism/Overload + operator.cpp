#include <iostream>
using namespace std;
// Polymorphism is the ability of objects to take on different forms or behave in different 
// ways depending on the context in which they are used.
class Marks{
    int intmark;
    int extmark;
    
public:
    
    //default constructor
    Marks () : intmark(0), extmark(0){}
    
    // parameterized constructor
	// Marks (int im, int em) : intmark(im), extmark(em){}
    
    void input(){
        
        cout<<"Internal marks: ";
        cin>>intmark;
        cout<<"External marks: ";
        cin>>extmark;
    }
    
    
    
    void display(){
        cout<<"Internal marks: "<<intmark<<endl;
        cout<<"External marks: "<<extmark<<endl;
    }
    
    // Overload + operator		(Adding internal and external marks)
    
    Marks operator + (Marks obj){
    	
        Marks temp;
        
        temp.intmark = intmark + obj.intmark;
        
        temp.extmark = extmark + obj.extmark;
        
        return temp;
    }
    
};

int main(){
    
    Marks m1, m2, res;
    
    cout<<"First Students Marks\n";
    m1.input();
    
    cout<<"Second Students Marks\n";
    m2.input();
    
    
    res = m1 + m2;
    
    res.display();
    
    
    return 0;
}