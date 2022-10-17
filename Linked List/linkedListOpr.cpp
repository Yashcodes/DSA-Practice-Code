#include <bits/stdc++.h>
using namespace std;

// Structure of the Linked List Node

struct Node
{
    int val;
    Node *next;
};

// Function for the insertion of the element at the end

Node *push_back(Node *head, int val)
{
    Node *temp = new Node();
    temp->val = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return head;
    }

    Node *q = head;
    while (q->next != NULL)
    {
        q = q->next;
    }

    q->next = temp;
    return head;
}

// Function for the insertion of the element in the beginning

Node *push_front(Node *head, int val)
{
    Node *temp = new Node();
    temp->val = val;
    temp->next = head;
    head = temp;
    return head;
}

// Funciton to search a specific element

bool search(Node *head, int val)
{
    Node *q = head;

    while (q != NULL)
    {
        if (q->val == val)
        {
            return true;
        }
        q = q->next;
    }

    return false;
}

// Function to print the data of the linked list

void print(Node *head)
{
    Node *q = head;

    while (q != NULL)
    {
        cout << q->val << " ";
        q = q->next;
    }
}

// Function to update the linked list data

void update_list(Node *head, int val, int new_val)
{
    Node *q = head;

    while (q != NULL)
    {
        if (q->val == val)
        {
            q->val = new_val;
        }
        q = q->next;
    }
}

// Function to delete the last element

Node *pop_back(Node *head)
{
    Node *temp = head;

    if (head == NULL)
    {
        cout << "\nLinked list is already empty...! Please try to perform insert operation.\n";
        return head;
    }
    else if (head->next == NULL)
    {
        delete temp;
        head = NULL;
        return head;
    }

    Node *q = head;
    while (q->next->next != NULL)
    {
        q = q->next;
    }

    temp = q->next;
    delete temp;
    q->next = NULL;
    return head;
}

// Function to delete the first element

Node *pop_front(Node *head)
{
    if (head == NULL)
    {
        cout << "\nLinked list is already empty...! Please try to perform insert operation.\n";
        return head;
    }

    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

// Function to delete any choice element from the linked list (middle deletion)

Node *find_and_delete(Node *head, int val)
{
    if (head == NULL)
    {
        cout << "\nLinked list is already empty...! Please try to perform insert operation.\n";
        return head;
    }

    if (head->val == val)
    {
        return pop_front(head);
    }

    Node *q = head;
    while (q->next != NULL)
    {
        if (q->next->val == val)
        {
            Node *temp = q->next;
            q->next = temp->next;
            delete temp;
            return head;
        }
        q = q->next;
    }
    cout << "Value Not Found...!" << endl;
    return head;
}

// Function to insert at the middle of the linked list

Node *insert_mid(Node *head, int val, int pos)
{
    if (head == NULL)
    {
        return push_front(head, val);
    }

    pos--;
    auto q = head;

    while (q != NULL && pos--)
    {
        q = q->next;
    }

    Node *temp = new Node();
    temp->next = q->next;
    temp->val = val;
    q->next = temp;
    return head;

    if (pos == 0)
    {
        return push_front(head, val);
    }
}

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *q = head;
    Node *nxt;

    while (q != NULL)
    {
        nxt = q->next;
        q->next = prev;
        prev = q;
        q = nxt;
    }

    return prev;
}

int main()
{
    Node *head = NULL;

    while (1)
    {
        int ch;
        cout << "\n1. Insert at end\t 2. Insert at begin\t 3. Search\t 4. Print\t 5. Update data\t 6. Delete last\t 7. Delete begin\t 8. Find and Delete\t 9. Insert at middle\t 10. Reverse list\n\n";
        cout << "Enter the operation : ";
        cin >> ch;

        int val;

        switch (ch)
        {
        case 1:
            cout << "Enter element to insert at end : ";
            cin >> val;
            head = push_back(head, val);
            break;

        case 2:
            cout << "Enter element to insert at begin : ";
            cin >> val;
            head = push_front(head, val);
            break;

        case 3:
            cout << "Enter the value to search for : ";
            cin >> val;
            if (search(head, val))
            {
                cout << "\nData is present in the list...!\n";
            }
            else
            {
                cout << "\nData is not present in the list...!\n";
            }
            break;

        case 4:
            cout << "\nThe data in the list is : ";
            print(head);
            cout << endl;
            break;

        case 5:
            cout << "Enter the previous value : ";
            cin >> val;
            cout << "Enter the new value to update : ";
            int new_val;
            cin >> new_val;
            update_list(head, val, new_val);
            break;

        case 6:
            head = pop_back(head);
            break;

        case 7:
            head = pop_front(head);
            break;

        case 8:
            cout << "Enter the value to delete : ";
            cin >> val;
            head = find_and_delete(head, val);
            break;

        case 9:
            cout << "Enter data to insert at middle : ";
            cin >> val;
            cout << "Enter positon where data to be inserted : ";
            int pos;
            cin >> pos;
            head = insert_mid(head, val, pos);
            break;

        case 10:
            head = reverse(head);
            break;

        default:
            cout << "\nChoose the correct operation...!";
            exit(0);
            break;
        }
    }

    return 0;
}