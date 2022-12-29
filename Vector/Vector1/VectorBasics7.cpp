#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    int arr[] = {10, 5, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr, arr + n);   //arr-Address of the first element, Arr+n, Address after the last element
  
    for(auto it = v.rbegin(); it != v.rend(); it++){   //rbegin() reverse traverse
        cout << *(it) << " ";  
    }
    
    return 0; 
}