#include <bits/stdc++.h>
using namespace std;
// Stack class.
class Stack
{
private:
    vector<int> v;
    int first, capacity;

public:
    Stack(int capacity)
    {
        this->capacity = capacity;
        v.resize(capacity);
        first = -1;
    }
    void push(int num)
    {
        if (first >= capacity - 1)
            return;
        first++;
        v[first] = num;
    }

    int pop()
    {
        if (first < 0)
            return -1;
        return v[first--];
    }

    int top()
    {
        if (first < 0)
            return -1;
        return v[first];
    }

    int isEmpty()
    {
        if (first < 0)
            return 1;
        return 0;
    }

    int isFull()
    {
        if (first == capacity - 1)
            return 1;
        return 0;
    }
};

int main()
{
}