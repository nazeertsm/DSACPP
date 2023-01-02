// CPP program to implement
// working of assign() and remove()
#include <forward_list>
#include <iostream>
using namespace std;

int main()
{

    // Declaring a forward list
    forward_list<int> l;

    // Assigning values to the list
    l.assign({ 10, 20, 30, 10 });

    // Removing elements from list
    l.remove(10);

    // Displaying the list
    for (auto it = l.begin(); it != l.end(); it++)
        cout << (*it) << " ";

    return 0;
}