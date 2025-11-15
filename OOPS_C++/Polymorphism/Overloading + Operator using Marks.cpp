#include<iostream>
using namespace std;
class Marks{
	public:
	int intmark;
	int extmark;
	
	Marks(): intmark(0), extmark(0){}
	
	Marks(int im, int em): intmark(im), extmark(em){}
	
	//Overloading + operator
	Marks operator+(Marks m){
	Marks temp;
	
	temp.intmark = intmark + m.intmark;
	temp.extmark = extmark + m.extmark;
	return temp;
	}
	
	void display(){
        cout<<intmark<<endl<<extmark<<endl;
    }
};

int main(){

Marks m1(10,20), m2(30,40), m3;

m3 = m1 + m2;

m3.display();

	return 0;
}