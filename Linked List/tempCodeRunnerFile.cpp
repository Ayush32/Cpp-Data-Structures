        insertAtTail(head, data);
        return;
    }
    else if (p > length(head))
    {
        insertAtTail(head, data);
    }
    else
    {
        // take p - 1 jumps;
        int jump = 1;
        node *temp = head;
        while (jump <= p - 1)
        {
            temp = temp->next;
            jump++;
        }
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void deleteHead(node *head)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head->next;
    delete head;
    head = temp;
}

int main()
{
    node *head = NULL;
    insertAThead(head, 3);
    insertAThead(head, 2);
    insertAThead(head, 1);
    insertAThead(head, 0);
    print(head);
    cout << endl;
    insertMiddle(head, 4, 3);
    insertAtTail(head, 7);
      d