#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Queue
{
    // Want to do it with LinkedList
private:
    node *head, *back;

public:
    Queue()
    {
        head = NULL;
    }

    bool isEmpty()
    {
        if (head == NULL)
            return true;
        return false;
    }

    void enqueue(int data)
    {
        if (head == NULL)
        {
            head = new node;
            head->data = data;
            back = head;
        }
        else
        {
            node *temp = new node;
            temp->data = data;
            back->next = temp;
            back = back->next;
        }
    }

    int dequeue()
    {
        if (isEmpty())
            return -1;
        int data = head->data;
        head = head->next;
        return data;
    }

    int front()
    {
        if (isEmpty())
            return -1;
        return head->data;
    }
};

int main()
{
}