#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data)
    {
        val=data;
        next=NULL;
    }
};

int main()
{
    Node* n = new Node(1);
    Node* n1 = new Node(2);
    Node* n2 = new Node(3);
    Node* n3 = new Node(4);
    Node* n4 = new Node(5);

    // Connect the nodes to form a linked list
    n->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    // Print the value of the first node and its next pointer
    cout << n->val << " " << n->next << endl;

    return 0;
}
