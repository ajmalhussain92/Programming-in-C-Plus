#include <iostream>
using namespace std;
//Static Variable

void fun(){
    static int count = 0;
    
    count++;
    
    cout<<count<<endl;
}


int main() {
    
    fun();			//output: 1
    fun();			//output: 2
    fun();			//output: 3
    fun();			//output: 4
    fun();			//output: 5
    
    return 0;
}
