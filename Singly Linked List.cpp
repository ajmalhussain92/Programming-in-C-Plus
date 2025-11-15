#include<iostream>
using namespace std;
//Singly Linked List (Insertion, and Display data)

    // Definition of a Node in a singly linked list
struct Node {
  
    // Data part of the node
    int data;

    // Pointer to the next node in the list
    Node* next;

    // Constructor to initialize the node with data
    Node(int value){
        data = value;
        next = nullptr;
    }
};

class LinledList{
    public:
    Node* head;
    // Constructor initializes an empty list
    LinledList():head(nullptr){}
    
    // Method to add a node at the end of the list
    void append(int value){
        Node* newNode = new Node(value);
        
        if(head == nullptr){
            head = newNode;             // First node becomes the head
        }else{
            Node* temp = head;          // For traversal from the head
            
            while(temp->next != nullptr){
                temp = temp->next;      // Move to the next node until last node
            }
            temp->next = newNode;       // newNode added to the last node of LinledList
        }
        
    }
    
    void display(){
        Node* temp = head;
        
        while(temp!=nullptr){
            
            cout<<temp->data<<" -> ";
            temp = temp->next;
            
        }
        cout << "nullptr" << endl;
    }
    
};

int main(){
    
    LinledList list;

    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);

    list.display();
    
    return 0;
}
/*
-> 'new' ensures Dynamic Memory to grow the LinkedListcan as needed.
-> Using a 'struct' with a next pointer, nodes can be manipulated freely, allowing efficient insertion, deletion, and traversal.

-> using a struct to define a Node, and creating a linked list is an effective approach to implement a singly linked list in C++.








*/