#include <bits/stdc++.h>
using namespace std;
/************************************************************

    Following is the linked list node structure.

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

template <typename T>
class Node
{
public:
    T data;
    Node *next;

    Node(T data)
    {
        next = NULL;
        this->data = data;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

Node<int> *newNode(int data)
{
    Node<int> *node = new Node<int>(0);
    node->data = data;
    node->next = NULL;
    return node;
}

void insertNewNode(Node<int> **root, int data)
{
    Node<int> *node = newNode(data);
    Node<int> *ptr;
    if (*root == NULL)
        *root = node;
    else
    {
        ptr = *root;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = node;
    }
}

Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    Node<int> *newHead = NULL;
    while (first != NULL && second != NULL)
    {
        if (first->data <= second->data)
        {
            insertNewNode(&newHead, first->data);
            first = first->next;
        }
        else
        {
            insertNewNode(&newHead, second->data);
            second = second->next;
        }
    }
    while (first != NULL)
    {
        insertNewNode(&newHead, first->data);
        first = first->next;
    }
    while (second != NULL)
    {
        insertNewNode(&newHead, second->data);
        second = second->next;
    }
    return newHead;
}

int main()
{
    return 0;
}
