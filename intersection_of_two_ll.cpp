#include <bits/stdc++.h>
using namespace std;

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

int findIntersection(Node *firstHead, Node *secondHead)
{
    map<Node *, int> f, s;
    while (firstHead != NULL && secondHead != NULL)
    {
        f[firstHead] = 1;
        s[secondHead] = 1;
        if (f[secondHead] == 1)
            return secondHead->data;
        if (s[firstHead] == 1)
            return firstHead->data;
        firstHead = firstHead->next;
        secondHead = secondHead->next;
    }
    while (firstHead != NULL)
    {
        f[firstHead] = 1;
        if (s[firstHead] == 1)
            return firstHead->data;
        firstHead = firstHead->next;
    }
    while (secondHead != NULL)
    {
        s[secondHead] = 1;
        if (f[secondHead] == 1)
            return secondHead->data;
        secondHead = secondHead->next;
    }
    return -1;
}

int main()
{

    return 0;
}