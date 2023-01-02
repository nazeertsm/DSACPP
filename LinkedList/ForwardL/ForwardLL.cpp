#include<iostream>
#include <forward_list>
using namespace std;

int main(){


     // Initialising a forward list
    forward_list<int> l = { 10, 15, 20 };

    // Pushing elements into the list
    l.push_front(5);

    // Pushing elements into the list
    l.push_front(3);

    // Popping out elements from list
    l.pop_front();

    // Displaying the list
    for (int x : l)
        cout << x << " ";
    return 0;

    

}