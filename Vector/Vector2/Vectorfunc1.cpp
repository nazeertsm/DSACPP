#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    vector<int> v{10, 5, 20, 15} ; 
    v.pop_back();
    
    for(int x :  v){
        cout << x << " ";
    }
  
    cout << v.front() << " ";   //front function return to the reference of first element
    cout << v.back() << " ";   //back function return to the reference of last element
    
    return 0; 
}