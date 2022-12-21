#include<iostream>
#include <vector>

using namespace std;


void moveZeroes(vector<int>& nums) {

    int lastNonZeroFoundAt = 0;
    // If the current element is not 0, then we need to
    // append it just in front of last non 0 element we found. 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];
        }
    }
 	// After we have finished processing new elements,
 	// all the non-zero elements are already at beginning of array.
 	// We just need to fill remaining array with 0's.
    for (int i = lastNonZeroFoundAt; i < nums.size(); i++) {
        nums[i] = 0;
    }

}
    int main(){
        vector<int> arr{1,9,8,4,0,0,2,7,0,6,0,9};
         moveZeroes(arr);
     //print elements   
        for(const auto& i : arr)
                cout << i << ' ';
                cout << "\n";
            
                
  return 0;
}
