#include<iostream>
using namespace std;
//Overloading Short Hand Operators

class Marks{
	int mark;
	
	public:
		Marks(){
			mark = 0;
		}
		Marks(int m){
			mark = m;
		}
		void YourMarkPlease(){
			cout<<"Your mark is "<<mark<<endl;
		}
		
		void operator+=(int bonusMark){
			mark += bonusMark;
		}
		
		friend void operator-=(Marks &curObj, int redMark);
};

void operator-=(Marks &curObj, int redMark){
	curObj.mark -= redMark;
}

int main(){

Marks anilsmark(45);
anilsmark.YourMarkPlease();

anilsmark += 20;
anilsmark.YourMarkPlease();

anilsmark -= 20;
anilsmark.YourMarkPlease();


	return 0;
}