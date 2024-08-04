#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

node* takeInput()
{
    int data;
    cin >> data;
    node *head = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void deleteList(node* &head) {
    while (head != NULL) {
        node* temp = head;  // Store the current head
        head = head->next;  // Move the head to the next node
        delete temp;  // Delete the previous head
    }
}

int main()
{

    node *head = takeInput();
    print(head);
    deleteList(head);

    return 0;
}