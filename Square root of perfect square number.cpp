#include<iostream>
using namespace std;

//Square root of a number
// 2,3,7,8 => not a perfect square if these unit place 
int nq(int key){
	for(int i=1; i<key; i++){
		if(i*i==key){
			return i;
		}
	}
	return -1;
}

int main(){
	
	int num;
	
	cout << "Number: ";
	cin >> num;
	
	int r=nq(num);
	if(r==-1){
		cout << "Not a perfect Square !";
	}else{
		cout << "Square root:"<<r;
	}
	
	return 0;
}