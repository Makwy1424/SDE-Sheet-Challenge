#include <bits/stdc++.h>
using namespace std;
/****************************************************************

    Following is the class structure of the Node class:

       class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int Length(Node *head)
{
    Node *p = head;
    int ct = 0;
    while (p != NULL)
    {
        ct++;
        p = p->next;
    }
    return ct;
}

Node *func(Node *head, int len)
{
    if (len == 1)
        return head;

    Node *p = head;
    for (int i = 0; i < len - 1; i++)
        p = p->next;

    return p;
}

Node *findMiddle(Node *head)
{
    Node *newHead = NULL;
    int length = Length(head);
    if (length % 2 == 1)
    {
        newHead = func(head, (length + 1) / 2);
    }
    else
    {
        newHead = func(head, (length / 2) + 1);
    }
    return newHead;
}

int main()
{
    //     4
    // 1 2 3 4 5 -1
    // 4 0 32 5 48 6 -1
    // 2 69 7 -1
    // 1 4 5 8 9 6 3 -1

    findMiddle(NULL);
    return 0;
}