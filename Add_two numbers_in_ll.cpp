#include <bits/stdc++.h>

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

Node *addTwoNumbers(Node *head1, Node *head2)
{
    // I assume I am gonna add all my answers to Node head1
    if (head1 == NULL)
        return head1;
    if (head2 == NULL)
        return head2;
    Node *ans = new Node((head1->data + head2->data) % 10);
    int rem = (head1->data + head2->data) / 10;
    head1 = head1->next;
    head2 = head2->next;
    Node *p = ans;
    while (head1 != NULL && head2 != NULL)
    {
        Node *temp = new Node((head1->data + head2->data + rem) % 10);
        rem = (head1->data + head2->data + rem) / 10;
        p->next = temp;
        p = temp;
        head1 = head1->next;
        head2 = head2->next;
    }
    while (head1 != NULL)
    {
        Node *temp = new Node((head1->data + rem) % 10);
        rem = (head1->data + rem) / 10;
        p->next = temp;
        p = temp;
        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        Node *temp = new Node((head2->data + rem) % 10);
        rem = (head2->data + rem) / 10;
        p->next = temp;
        p = temp;
        head2 = head2->next;
    }
    if (rem != 0)
    {
        Node *temp = new Node(rem);
        p->next = temp;
    }
    return ans;
}

int main()
{

    return 0;
}