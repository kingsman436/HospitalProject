#include <iostream>
using namespace std;
struct queue
{
    int data;
    queue* next;
    queue* prev;
};
class DoublyIntegerLinkedList
{
private:
    node* head; // the head of the list
    node* tail; // the end of the list 
    int counter;
public:
    DoublyIntegerLinkedList() // default constrctor 
    {
        counter = 0;
        head = tail = NULL;
    }
    void displaySize()
    {
        cout << "The current nodes in the list is: " << counter << endl;
    }
     void createNode(int value)
    {
        node* x = new node(); // the new node
        x->data = value;
        x->next = NULL;
        x->prev = NULL;
        if (head == NULL) // if the list is empty, then make head and tail points 
           // to x
        {
            head = tail = x;
        }
        else // if the list has at least one node, then make the tail points to x
        {
            // (head) 1 <-> 2 (tail) <-> NULL
            // add a new item 3
            // (head) 1 <-> 2 <-> 3 (tail) <-> NULL
            tail->next = x; // moves the pointer one step forward
            x->prev = tail;
            tail = x; // makes the tail points to x
        }
        counter++;
    }
}

int main(){



return 0;
}
