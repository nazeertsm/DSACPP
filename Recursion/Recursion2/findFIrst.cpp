#include<iostream>
using namespace std;

int findFirst(int arr[], int size, int index, int target){
    if(index==size){
        return -1;
    
    }

    if (arr[index]==target)
    {
        return index;
    }else{
    return findFirst(arr, size, index+1, target);
    }
    
}

int main(){

    int arr[] = {1, 3, 4, 2, 5, 4, 2, 2, 1};
    int size = 9;
    int target = 5;
    cout<<findFirst(arr, size, 0, target)<<endl;

}

//PROGRAM Not complete