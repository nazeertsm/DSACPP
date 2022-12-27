#include<iostream>
#include<cstdlib> //for NULL
using namespace std;

class node //create Node
{
    public:

    int value;
    node *prev;  //previos pointer
    node *next;  //next pointer

    node()  //create constructor to assign default value
    {
        value = 0;
        prev = NULL;
        next = NULL;
    }
};

class DLL
{
    node *head; //head pointer for Node type

    public :
        DLL()
        {
            head = NULL; //create constructor to assign head as NULL
        }

        void insertAtBegin(int v)
        {
            node *temp = new node();
            temp->value = v;

            if(head == NULL)
            {
                head = temp;
            }
            else
            {
                temp->next = head;
                head->prev = temp;
                head = temp;
            }
        }
         void printDLL()
        {
            node *t = head; //assigh head node to t and traverse until t not equal to NULL 

            while(t != NULL)
            {
                cout<<t->value<<" <=> ";
                t=t->next;
            }
            cout<<endl;
        }
};

int main()
{
    DLL dl;
    dl.insertAtBegin(50);
    dl.insertAtBegin(100);
    dl.insertAtBegin(200);
    dl.printDLL();

    return 0;
}
