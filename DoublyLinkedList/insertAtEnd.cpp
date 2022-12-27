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

        void insertAtEnd(int v)
        {
            node *temp = new node(); //Create temp node
            temp->value = v;   //assign user value from v (user)

            if(head == NULL) //check whether head id is NULL
            {
                head = temp;  //assign temp to head
            }
            else
            {
                node *t = head;  //assign head to t pointer, Now head and t both pointing head, reason, we will use t, to avoid make changes to head

                while(t->next != NULL) //until t Next is null, assign t->next t (once t next is null, we can create new node and replace null(t-next) to temp) and temp previous to t
                {
                    t = t->next;
                }
                t->next = temp;
                temp->prev = t;
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

    dl.insertAtEnd(5);
    dl.insertAtEnd(10);
    dl.insertAtEnd(20);
    dl.insertAtEnd(15);
    
    dl.printDLL();

    return 0;
}
