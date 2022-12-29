#include<iostream>
#include<vector>
using namespace std;

void findAllOccurence(int arr[], int size, int index, int target, vector<int>&ans){
    //base case
    if(index==size)
        return;
    

    if (arr[index]==target)
    
        ans.push_back(index);

        return findAllOccurence(arr, size, index+1, target, ans);
    
}

int main(){

    int arr[] = {1, 3, 4, 2, 5, 4, 2, 2, 1};
    int size = 9;
    int target = 2;
    vector<int>ans;

    findAllOccurence(arr, size, 0, target, ans);

    cout<<"Printing the ans array"<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
 

}
