#include<iostream>
using namespace std;

int getMax(int arr[], int size, int index){
    if(index==size)
        return INT_MIN;

    int M_Ans = arr[index];
    int recAns = getMax(arr, size, index+1);
    int finalAns = max(M_Ans, recAns);
    return finalAns;

}

int main(){

    int arr[] = {1, 3, 5, 7};
    int size = 4;
    cout<<getMax(arr, size, 0)<<endl;



}