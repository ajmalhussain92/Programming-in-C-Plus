#include <iostream>
using namespace std;
//Static Variable

void fun(){
    static int a = 10;
    cout<<a<<" ";
    a++;
}


int main() {
    
    fun();			//output: 1
    fun();			//output: 2
    fun();			//output: 3
    fun();			//output: 4
    fun();			//output: 5
    
    return 0;
}
