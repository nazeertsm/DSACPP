
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

    // Declaring another forward list
    forward_list<int> l2;

    // Assigning one list to another
    l2.assign(l.begin(), l.end());

    // Displaying the second list
    for (auto it = l2.begin(); it != l2.end(); it++)
        cout << (*it) << " ";

    return 0;
}