#include<iostream>
using namespace std;

void createLL();
void printList();
void addNodeAtFront();
void addNodeAtBack();
void reverseList();

struct Node{
    int data;
    struct Node* next;
};

void printList(Node *head){
     struct Node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}

void addNodeAtFront(int data, struct Node** head){
    Node *new_node = (struct Node*) malloc(sizeof(new_node));
    new_node->data=data;
    new_node->next=*head;
    *head=new_node;
    // printList(*head);
}

void addNodeAtBack(int data,Node *head){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    struct Node* last = (struct Node*) malloc(sizeof(struct Node));
    temp=head;
    last->data=data;
    last->next=NULL;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=last;               // 5 1 2 3 10  10 3 2 1 5
}                                  // h        

static void reverseList(struct Node **head){
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->next;
 
        // Reverse current node's pointer
        current->next = prev;
 
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head = prev;
}

int main(){

    struct Node* head=NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;

    // printList(head);
    addNodeAtFront(5, &head);
    addNodeAtBack(10, head);
    printList(head);
    cout<<endl;
    reverseList(&head);
    printList(head); 
}