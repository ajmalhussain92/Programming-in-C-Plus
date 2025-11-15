#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cout<<"Enter no: ";
	cin>>n;
	string str=to_string(n);
	reverse(str.begin(),str.end());
	cout<<"Your reversed no.: "<<num;
	return 0;
}