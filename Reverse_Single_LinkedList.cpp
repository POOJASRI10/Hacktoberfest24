
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to reverse the linked list
Node* reverseList(Node* head) {
    Node* prev = nullptr;  // Previous node starts as NULL
    Node* current = head;  // Current node is the head of the list
    Node* next = nullptr;  // To store the next node temporarily

    while (current != nullptr) {
        next = current->next;   // Save the next node
        current->next = prev;   // Reverse the link
        prev = current;         // Move prev one step ahead
        current = next;         // Move current one step ahead
    }

    return prev;  // New head of the reversed list
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Helper function to add a new node at the beginning
void push(Node*& head, int new_data) {
    Node* new_node = new Node();  // Create a new node
    new_node->data = new_data;    // Assign data
    new_node->next = head;        // Make it point to the old head
    head = new_node;              // Update head to new node
}

int main() {
    Node* head = nullptr;

    // Create a list: 1 -> 2 -> 3 -> 4 -> 5
    push(head, 5);
    push(head, 4);
    push(head, 3);
    push(head, 2);
    push(head, 1);

    cout << "Original list: ";
    printList(head);

    // Reverse the list
    head = reverseList(head);

    cout << "Reversed list: ";
    printList(head);

    return 0;
}
