#include <iostream>
#define MAX 100
using namespace std;

class Stack
{
    int top;
    public:
    int a[MAX];
    Stack(){top = -1;}
    bool push(int x);
    int pop();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if(top>=MAX)
    {
        cout<<"stack overflow\n";
        return false;
    }
    else
    {
        a[++top] = x;
        return true;
    }
}

int Stack::pop()
{
    if(top<0)
    {
        cout<<"stack underflow\n";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top<0);
}

int main()
{
    struct Stack s;
    s.push(20);
    s.push(20);
    s.push(20);
    cout<<s.pop();
    
}