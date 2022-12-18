#include<iostream>
using namespace std;

int getMax(int arr[], int size, int index, int &maxi){
    if(index==size)
        return maxi;

    maxi = max(maxi, arr[index]);
    getMax(arr, size, index+1, maxi);

}

int main(){

    int arr[] = {1, 3, 78, 7};
    int size = 4;
    int maxi = INT_MIN;
    cout<<getMax(arr, size, 0, maxi)<<endl;

}

//PROGRAM Not complete