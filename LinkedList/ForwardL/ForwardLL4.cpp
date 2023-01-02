
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
    l.assign(5, 10); //assign  5 times 10---10 10 10 10 10

    // Displaying the second list
    for (auto it = l.begin(); it != l.end(); it++)
        cout << (*it) << " ";

    return 0;
}