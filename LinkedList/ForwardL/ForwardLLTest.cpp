#include<iostream>
#include<forward_list>
using namespace std;
int main(){

    forward_list<int>l1;
    
    l1.assign({5, 10, 20});

    for (auto it= l1.begin(); it!=l1.end(); it++ )
    {
        cout<<(*it)<<endl;
    }
    
}