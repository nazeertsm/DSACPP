#include<iostream>
using namespace std;

void printArray(int arr[], int index){

    if(index<0)
        return;

    
    cout<<arr[index]<<endl;
    printArray(arr, index-1);
    

}

int main(){

    int arr[] = {10, 30, 20, 60};
    int size = 4;
    printArray(arr, size-1);
}