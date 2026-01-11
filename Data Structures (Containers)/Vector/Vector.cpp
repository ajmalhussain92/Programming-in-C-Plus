#include<iostream>
#include<vector>    //std::vector
using namespace std;

int main(){
    
    vector <int> vec1 = {10, 50, 30, 70};
    
    //vectors can be iterated by all loops
    
    vector<int> vec2 (5, 2);
    
    cout<<"Vector1: ";
    for(int i=0; i<4; i++){
        
        cout<<vec1[i] << " ";
    }
    
    cout<<"\nVector2: ";
    //foreach loop
    for(int val : vec2){
        cout << val <<" ";
    }
    
    cout<<endl<<vec1.size() << endl;
    
    vec1.push_back(20);
    
    cout<<vec1.size() << endl;
    
    nums.insert (nums.begin() + 0, 90);
    
    // 	vector<int>::iterator it = nums.begin();
//     cout << *it;
    return 0;
}