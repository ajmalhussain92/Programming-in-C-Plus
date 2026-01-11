#include<iostream>
#include<vector>    //std::vector
using namespace std;

void show_elements (vector<int>& nums) {
    for (int x : nums) {
	    cout << x << " ";
	}
}

int main(){
    
    vector <int> nums = {10, 50, 30, 70};
    
    nums.insert(nums.begin(), 100);
    
    show_elements (nums);
    
    return 0;
}