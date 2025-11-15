#include <iostream>
using namespace std;

class Marks{
    private:
    int intmark;
    int extmark;
    
    public:
    
    Marks(){
    intmark = 0;
    extmark = 0;
    }
    
    Marks(int im, int em){
        intmark = im;
        extmark = em;
    }
    void display(){
        cout << "Internal marks: "<<intmark<<endl;
        cout << "External marks: "<<extmark<<endl;
    }
    
    Marks operator -(Marks mObj){
         Marks temp;
         temp.intmark = intmark - mObj.intmark;
         temp.extmark = extmark - mObj.extmark;
         return temp;
     }  
};

/* Outside class operator overloading

Marks Marks :: operator -(Marks mObj){
    Marks temp;
    temp.intmark = intmark - mObj.intmark;
    temp.extmark = extmark - mObj.extmark;
    return temp;
}
*/

int main(){
    
    Marks m1(10,30), m2(20,50);
    
    Marks m3 = m2 - m1;
    
    m3.display();
    
    return 0;
}