#include<iostream>
using namespace std;

int findLast(int arr[], int size, int index, int target){
    if(index<0){
        return -1;
    
    }

    if (arr[index]==target)
    {
        return index;
    }
    
    else{

    return findLast(arr, size, index-1, target);

    }
    
}

int main(){

    int arr[] = {1, 3, 4, 2, 5, 4, 2, 2, 1};
    int size = 9;
    int target = 5;
    cout<<findLast(arr, size, size-1, target)<<endl;

}

