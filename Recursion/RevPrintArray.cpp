#include<iostream>
using namespace std;

void printArray(int arr[], int size, int index){

    if(index ==size)
        return;

    
    printArray(arr, size, index+1);
    cout<<arr[index]<<endl;

}

int main(){

    int arr[] = {10, 30, 20, 60};
    int size = 4;
    int index = 0;

    printArray(arr, size, index);
}