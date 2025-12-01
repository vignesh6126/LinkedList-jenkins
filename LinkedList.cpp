#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head = nullptr;
    }
    void insertAtBeggining(int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    void display(){
        Node* temp = head;
        while(temp!=nullptr){
            cout <<temp->data<<" -> ";
            temp=temp->next;
        }
    }
    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = newNode;
            return;
        }
        else{
            Node* temp = head;
            while(temp->next != nullptr){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
} ;

int main(){
    LinkedList list;
    list.insertAtBeggining(10);
    list.insertAtBeggining(20);
    list.insertAtBeggining(30);
    list.display();
    return 0;
}
