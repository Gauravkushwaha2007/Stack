#include <iostream> 
using namespace std;

class Node {
        public: 
            int data;
            Node* next;
            Node(int value){
                data = value;
                next = NULL;
            }
};

class Stack {
        public:
        Node* top;
        Stack(){
                top = NULL;
        }

//Push operation in Stack (same logic as linked list)
        void push(int value){
                Node* newNode = new Node(value);
                newNode-> next = top;
                top = newNode;
        }

//pop operation in stack (same as a linked list)
        void pop(){
                if(top == NULL){
                        cout<< "Stack is olready Empty! \n";
                        return;
                }
                Node* temp = top;
                top = top-> next;
                delete temp;
        }

// Display Stack
        void display(){
                if(top == NULL) {
                        cout<< "No value exist in Stack \n";
                        return;
                }
                Node* temp = top;
                while(temp != NULL){
                        cout<< temp-> data << " ";
                        temp = temp-> next;
                }
                cout<< endl;
        }
};


int main(){
        Stack s;
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        cout<< "Before deletion our Stack is: \n";
        s.display();
        s.push(50);    
        s.push(100);
        cout<< "after addition some values in Stack is: \n";
        s.display();

return 0;
}



