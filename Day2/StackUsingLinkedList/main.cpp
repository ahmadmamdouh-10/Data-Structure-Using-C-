#include <iostream>

using namespace std;

class Node
{
public:
    int Data;
    Node *Prev;

    Node(int data)
    {
        Data = data;
        Prev = NULL;
    }
};

class Stack
{
    Node *Top;

public:
    Stack()
    {
        Top = NULL;
    }

    void Push(int data)
    {
        Node *newNode = new Node(data);

        if(Top == NULL)
        {
            Top = newNode;
        }
        else
        {
            newNode->Prev = Top;
            Top = newNode;
        }
    }

    int Pop(int &data)
    {
        if(Top == NULL)
        {
            return 0;
        }
        else
        {
            data = Top->Data;
            Node *pDelete = Top;
            Top = Top->Prev;

            delete pDelete;
        }
    }
};

int main()
{

    return 0;
}
