#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    vector<int> v{10, 5, 20, 15} ; 
    
    v.resize(3);
    for(int x: v){
        cout << x << " ";
    }cout << endl;
  
    v.resize(5);  
    for(int x: v){
        cout << x << " ";
    }cout << endl;
    
    v.resize(8, 100);  //resize and make default value as 100, current values remains same,
    for(int x: v){
        cout << x << " ";
    }
    return 0; 
}