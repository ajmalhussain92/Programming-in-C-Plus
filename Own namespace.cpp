#include<iostream>
using namespace std;
//Own Namespace

namespace first{
	void show (){
	cout << "Akhilesh \n";
}
}

namespace second{
	void show (){
	cout << "Ankush \n";
}
}

int main(){




first::show();

second::show();


	return 0;
}