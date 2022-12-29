#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    int n = 3, x = 10;
    vector<int> v(n, x); //vector of size 3(n), all the values are 10(x)
  
    for(auto it = v.begin(); it != v.end(); it++){  //iterator gives the address of the element
        cout << *(it) << " ";  
    }
    
    return 0; 
}

//  v.begin()return type iterator of vector, if we dont write "auto", below we can use
//instead od auto, vector<int>::iterator-Address to vector elements