#include <iostream>
using namespace std;


int find(int balls[]){
	int a = balls[0]+balls[1]+balls[2];
	int b = balls[3]+balls[4]+balls[5];
	int c = balls[6]+balls[7]+balls[8];
	
	if (a==b) {
		if (balls[6]>balls[7]) {
			return balls[6];
		}else if (balls[7]>balls[6]){
			return balls[7];
		}else {
			return balls[8];
		}
	} else if (a>b) {
		if (balls[0]>balls[1]) {
			return balls[0];
		} else if (balls[1]>balls[0]){
			return balls[1];
		}else {
			return balls[2];
		}
	}else if (b>a){
		if (balls[3]>balls[4]){
			return balls[3];
		}else if (balls[4]>balls[3]){
			return balls[4];
		}else {
			return balls[5];
		}
	}else {
		return -1;
	}
}
int main () {
	
	int balls[9] = {1,1,1,1,1,1,1,1,7};
	
	int res = find (balls);
	
	if (res != -1)
		cout << "The odd ball: " << res;
	else 
		cout << "All balls are equal! ";
	
	return 0;
}