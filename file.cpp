// repo name : stackUsingLinkedList_4nimbelakang
// commit minimal 20
#include <iostream>
using namespace std;

// Node class representing a single node in the Linked List
class Node 
{
public:
    int data;
    Node* next;

    Node()
    {
        next = NULL;
    }
};

// Stack class
class Stack
{
private:
    Node *top; // Pointer to the top node of the stack

public:
    Stack()
    {
        top = NULL; // Initialize the stack with a null top
    }

    // Push operation: Insert an element onto the top of the
    int push(int value)
    {
        Node *newNode = new Node(); // 1. allocate memory
        newNode->data = value; // 2. assign value
        newNode->next = top; // 3. Set the next point
        top = newNode; // 4. Update the top pointer
        cout << "Push value: " << value << endl;
        return value;
    }

    