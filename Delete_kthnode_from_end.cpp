#include <bits/stdc++.h>
using namespace std;

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int size(LinkedListNode<int> *head)
{
    int s = 0;
    while (head != NULL)
    {
        s++;
        head = head->next;
    }
    return s;
}

LinkedListNode<int> *removeKthNode(LinkedListNode<int> *head, int K)
{
    if (head == NULL)
        return head;
    int s = size(head);
    s = s - K + 1;
    LinkedListNode<int> *p = head;
    if (s == 1)
    {
        LinkedListNode<int> *aa = head;
        head = head->next;
        delete aa;
        return head;
    }
    while (s > 2)
    {
        s--;
        p = p->next;
    }

    if (p->next != NULL)
        p->next = p->next->next;
    else
        p->next = NULL;
    return head;
}

int main()
{
    return 0;
}