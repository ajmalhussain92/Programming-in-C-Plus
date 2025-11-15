#include <iostream>
using namespace std;

int find(int balls[], int len){
	
	for (int i=0; i<len; i++){
		if (i!=len){
			if (balls[i]>balls[i+1]){ 
				return balls[i];
			}
		} else {
			if (balls[i]==balls[i-1])	return -1;
//			else if (balls[i+1]>balls[i])	return i+1;
			else return balls[i];
		}
	}
}
int main () {
	
	int balls[9] = {1,1,1,1,1,1,1,1,1};
	
	int res = find (balls, 9);
	
	if (res != -1)
		cout << "The odd ball: " << res;
	else 
		cout << "All balls are equal! ";
	
	return 0;
}