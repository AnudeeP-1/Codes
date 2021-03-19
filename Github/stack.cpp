/*
Note: 
Keep the usage of in-built function to the minimum
Add/Optimize  features
Please follow best coding practices
Add comments if necessary
And make the Code Bug free
*/

#include<iostream>
using namespace std;

class Node{

friend class Stack;

private:
    int data;
    Node* prev;
    
public:
    Node( int num ) : data( num ), prev( nullptr ) {}

};

class Stack{

public:
    Node *top;

    Stack() : top( nullptr ) {}

    bool push( int num ) {
        Node *newNode = new Node( num );
        newNode->prev = top;
        top = newNode;
        cout << "Pushed: " << top->data << endl;
        return true;
    }

    bool pop() {
        if( !top )
            return false;
        cout << "Popped: " << top->data << endl;
        Node* nodeToBeDeleted = top;
        top = top->prev;
        delete nodeToBeDeleted;
        return true;
    }

    int topEle(){
        return top->data;
    }

    void print(){
        Node* temp = top;
        cout<<"Stack: ";
        while( temp ){
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main(){
    Stack st = Stack();
    st.print();
    
    st.push(10);
    st.print();

    st.push(20);
    st.print();

    st.pop();
    st.print();

    return 0;
}