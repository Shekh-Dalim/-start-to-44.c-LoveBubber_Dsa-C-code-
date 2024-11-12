/*************************************************** singly Linked List *************************************************/


/****************** (not start with eampty list)singly LL Insert at begining , AtPositiont and tail******************************/


// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {

//         this->data = data;
//         this->next = NULL;
//     }
// };
// void InsertAtHead(Node *&head, int d) // d is a data  // Mai chahata hmm ki original linkedlist ke ander hi changes hoo thats why use &(reference)
// {

//     Node *temp = new Node(d); // Create new node
//     temp->next = head;
//     head = temp;
// }

// void InsertAtTail(Node *&tail, int data)
// {

//     Node *temp = new Node(data);
//     tail->next = temp;
//     tail = temp; // tail = temp; or tail = tail->next;
// }
// void InsertAtPosition(Node *&head, Node *&tail, int position, int data)
// {
//     if (position == 1)
//     {
//         InsertAtHead(head, data);
//         return;
//     }

//     Node *temp = head;
//     int count = 1;

//     while (count < position - 1)
//     {
//         temp = temp->next;
//         count++;
//     }
//     if (temp->next == NULL)
//     {
//         InsertAtTail(tail, data);
//         return;
//     }

//     Node *NodeToInsert = new Node(data);
//     NodeToInsert->next = temp->next;
//     temp->next = NodeToInsert;
// }

// void display(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// int main()
// {
//     Node *node1 = new Node(10);
//     Node *head = node1;
//     Node *tail = node1;
//     display(head);

//     InsertAtHead(head, 13);
//     display(head);

//     InsertAtTail(tail, 20);
//     display(head);

//     InsertAtTail(tail, 30);
//     display(head);

//     InsertAtPosition(head, tail, 5, 4);
//     display(head);

//     return 0;
// }

/****************** (start with eampty list)singly LL Insert at begining , AtPositiont and tail******************************/
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next = NULL;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void InsertAtHead(Node *&head, Node *&tail, int data)
// {
//     // If the list is empty
//     if (head == NULL)
//     {
//         Node *temp = new Node(data); // Create new node
//         head = temp;
//         tail = temp;
//     }
//     else
//     {
//         Node *temp = new Node(data); // Create new node
//         temp->next = head;
//         head = temp;
//     }
// }

// void InsertAtTail(Node *&head, Node *&tail, int data)
// {
//     // If the list is empty
//     if (tail == NULL)
//     {
//         Node *temp = new Node(data);
//         head = temp;
//         tail = temp;
//     }
//     else
//     {
//         Node *temp = new Node(data);
//         tail->next = temp;
//         tail = temp; // Update tail
//     }
// }

// void InsertAtPosition(Node *&head, Node *&tail, int position, int data)
// {
//     if (position == 1)
//     {
//         InsertAtHead(head, tail, data);
//         return;
//     }

//     Node *temp = head;
//     int count = 1;

//     while (count < position - 1 && temp != NULL)
//     {
//         temp = temp->next;
//         count++;
//     }

//     // If we're at the end, insert at tail
//     if (temp == NULL || temp->next == NULL)
//     {
//         InsertAtTail(head, tail, data);
//         return;
//     }

//     // Insert at position
//     Node *NodeToInsert = new Node(data);
//     NodeToInsert->next = temp->next;
//     temp->next = NodeToInsert;
// }

// void display(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     display(head);

//     InsertAtHead(head, tail, 13);
//     display(head);

//     InsertAtTail(head, tail, 20);
//     display(head);

//     InsertAtTail(head, tail, 30);
//     display(head);

//     InsertAtPosition(head, tail, 4, 4);
//     display(head);

//     return 0;
// }


/****************(singly Linked List)Deletion  (100 perfect)**************************************/


/*
Deleting Node 1 (the node with data 11):

The deleteNode(1, head) function deletes the first node (11) by:

*: Storing the head node (which is the node with data 11).
*: Moving head to point to the next node (which is the node with data 12).
*: Breaking the connection of the node (11) to the next node.
*: Deleting the 11 node.

At this point, the list looks like this: head -> 12 -> 13 tail -> 13

Destructor Call:
*: The delete temp; line triggers the destructor of the node with data 11.
*: Inside the destructor, since next is pointing to the node with data 12, it will recursively delete the next node as well.

  i: Destructor for Node 11:

  *: The destructor is called for the node with data 11.
  *:It checks if this->next is not NULL, which it isn't (it points to the node with data 12), so it calls delete next; to delete the node with data 12.

Now, inside the destructor of the node with data 12:
  *: The destructor for the node with data 12 checks next (which points to node 13), and calls delete next; to delete the node with data 13.

Finally, the destructor of the node with data 13 is called:
 *: It doesn't have a next node (next == NULL), so it doesn't call delete next; and just outputs that the node is being deleted.

After all these deletions, the memory for nodes 11, 12, and 13 is freed, and we see the messages printed by the destructor.

*/
/*
(Destructor) Here's what happens step-by-step:

1: head points to the node with value 11.
2: next refers to the next node after head, which contains the value 12.
3: When delete next; is called, it deletes the node with the value 12.
4: After deletion, the linked list looks like this:  head -> 11 -> 13

So, the node with value 12 is removed, but the node with value 11 remains as the head, 
and the node with value 13 becomes the next node in the list.

Important note: The head node isn't deleted; only the node after head 
(which was the second node) is deleted.

*/



// #include <iostream>
// using namespace std;

// class Node
// {

// public:
//     int data;
//     Node *next = NULL;

// public:
//     // Constructor
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
//     // Destructor
//     ~Node()
//     {
//         int value = this->data; // Store value
//         // Memory free
//         if (this->next != NULL)   //there is a next node
//         {
//             delete next;  // it calls delete next(detele funtion); to delete the node with data 12.
//             this->next = NULL;  // It disconnects the current node from the next node,
//         }
//         cout << "Memory is free for node with data " << value << endl;
//         // Display the value which was delete
//     }
// };

// void insertAtEnd(int data, Node *&head, Node *&tail)
// {
//     Node *temp = new Node(data);
//     tail->next = temp;
//     tail = temp;
// }

// void display(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// void deleteNode(int position, Node *&head, Node *&tail)
// {

//     // Deletion first node or start node
//     if (position == 1)
//     {
//         Node *temp = head;
//         head = head->next;
//         temp->next = NULL; // before delete cut of the node connection
//         delete temp;       // delete temp (memory free) line triggers(Autometically) the destructor of the node with data 11.

//         if (head == NULL) // If list becomes empty, update tail
//         {
//             tail = NULL;
//         }
//     }
//     // Delete any middle node and last node
//     else
//     {
//         // Deletion middle
//         Node *curr = head;
//         Node *prev = NULL; //  "Previous is not there, so it is set to null."

//         int cnt = 1;
//         while (cnt < position) // Move the current pointer to the position that needs to be deleted.
//         {
//             prev = curr;  
//             curr = curr->next;
//             cnt++;
//         }
//         // Deletion last node
//         prev->next = curr->next;
       
//         if (curr->next == NULL)  // If deleting the last node, update the tail
//             tail = prev;

//         curr->next = NULL; // before delete cut of the node connection
//         delete curr;
//     }
// }

// int main()
// {
//     Node *node1 = new Node(10);
//     Node *head = node1;
//     Node *tail = node1;
//     display(head);

//     insertAtEnd(20, head, tail);
//     display(head);

//     insertAtEnd(30, head, tail);
//     display(head);

//     insertAtEnd(40, head, tail);
//     display(head);

//     deleteNode(4, head,tail);
//     display(head);

//     cout << "Head: " << head->data << endl;  // Correct
//     cout << "Tail: " << tail->data << endl;  // Correct

//     return 0;
// }


