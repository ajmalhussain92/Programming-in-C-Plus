#include <iostream>
using namespace std;

class table{
    private:
    int n;
    
    public:
    
    table(int n){
        cout<<"Parameterized constructor! "<<endl;
        
        this-> n = n;
    }
    
    void tbl(){
        
        for(int i=1; i<=10; i++){
        	
            cout << n<<" * "<<i<< " = "<< n * i<<endl;
        }
        
    }
    
};

int main(){
    
    table t1(10);
    
    table t2(15);
    
    t1.tbl();
    t2.tbl();
    

    return 0;
}