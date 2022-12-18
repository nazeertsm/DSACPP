#include<iostream>
using namespace std;

void printArray(int arr[], int size){

    if(size==0)
        return;

    
    cout<<arr[0]<<endl;
    printArray(arr+1, size-1);
    

}

int main(){

    int arr[] = {10, 30, 20, 60};
    int size = 4;
    printArray(arr, size);
}
