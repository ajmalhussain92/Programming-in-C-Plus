#include<iostream>
using namespace std;

int fact(int n){

    if(n == 0){  // base case
        return 1;
    }else{      // recursive case
        return n * fact( n - 1);
    }

}


int main(){

int num;

cout << "Number: ";
cin >> num;

cout<< fact(num);




	return 0;
}