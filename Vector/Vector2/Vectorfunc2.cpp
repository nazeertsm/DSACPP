#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    vector<int> v{10, 5, 20, 15} ; 
    auto it = v.insert(v.begin(), 100);  /*inserts new elements before the element at the specified position, */
    v.insert(v.begin() + 2, 200);       /*effectively increasing the container size by the number of elements inserted. 100 address will be return after insert new value*/
    v.insert(v.begin(), 2, 300); //insert 300  2 times at the begining
    
    vector<int> v2;
    v2.insert(v2.begin(), v.begin(), v.begin() + 2);  //insert element from another container, v.begin() + 2 not included, included v.begin() + 1
    for(int x :  v){
        cout << x << " ";
    }cout << endl;
  
    for(int x :  v2){
        cout << x << " ";
    }
    
    return 0; 
}