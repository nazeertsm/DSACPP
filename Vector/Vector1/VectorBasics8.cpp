#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    vector<int> v = {10, 20, 30};

    for (auto itr = v.begin(); itr!=v.end(); itr++)
    {
        cout<<(*itr)<<" ";
    }
    
    
    return 0; 
}