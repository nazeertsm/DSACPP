#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    vector<int> v{10, 5, 20, 15} ; 
    v.clear();  //remove all the elements of the vector
    
    cout << v.size() << " ";
  
    if(v.empty() == true)  //vector is empty or not
        cout << "Empty";
    else
        cout << "Not Empty";
    
    return 0; 
}