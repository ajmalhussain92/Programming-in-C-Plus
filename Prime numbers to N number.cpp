#include<iostream>
using namespace std;

int main(){
	int div,n,c=0;
	int num;
	cout<<"Enter no.: ";
	cin>>n;
		for(int num=2; num<=n; num++)
	for(div=1; div<=n; div++){
		
		if(num%div==0)
		c++;
		if(c==2)
		cout<<num<<endl;
		
	}
	
	return 0;
}