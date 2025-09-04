#include <iostream>
#include <string>

using namespace std;

int N;
string command[10000];
int A[10000];

struct Node { 
    Node * prev;
    Node * next;
    int data;

    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList { 
private:
    Node * head;
    Node * tail;
    int size;

public:
    DoublyLinkedList(): head(nullptr), tail(nullptr), size(0){}

    void push_front(int value) { 
        Node* new_node = new Node(value);

        if (head == nullptr) { 
            head = tail = new_node;
        } else { 
            head->prev = new_node;
            new_node->next = head;
        
            head = new_node;
        }
        size++;
    }

    void push_back(int value) { 
        Node* new_node = new Node(value);

        if (head == nullptr) { 
            head = tail = new_node;
        } else { 
            tail->next = new_node;
            new_node->prev = tail;

            tail = new_node;
        }
        size++;
    }

    void pop_front() { 
        if (head) { 
            printf("%d\n", head->data);
            Node* old_head = head;

            if (head == tail) { 
                head = tail = nullptr;
                return;
            }

            head = head->next;
            head->prev = nullptr;
            
            delete old_head;
            size--;
        }
    }

    void pop_back() { 
        if(tail) { 
            printf("%d\n", tail->data);
            Node* old_tail = tail;

            if (head == tail) { 
                head = tail = nullptr;
                return;
            }

            tail = tail->prev;
            tail->next = nullptr;
            
            delete old_tail;
            size--;
        }
    }

    void empty() { 
        int res = size > 0 ? 0 : 1;
        printf("%d\n", res);
    }

    void front() { 
        if (head) { 
            printf("%d\n", head->data);
        }
    }

    void back() { 
        if (tail) { 
            printf("%d\n", tail->data);
        }
    }

    void size_print() { 
        printf("%d\n", size);
    }
};



int main() {
    cin >> N;

    DoublyLinkedList list;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front")  {
            cin >> A[i];
            list.push_front(A[i]);
        }

        if (command[i] == "push_back") {
            cin >> A[i];
            list.push_back(A[i]);
        }

        if (command[i] == "pop_front") {
            list.pop_front();
        } 
        
        if (command[i] == "size") {
            list.size_print();
        } 

        if (command[i] == "pop_back") {
            list.pop_back();
        } 
        
        if (command[i] == "empty") {
            list.empty();
        } 
        
        if (command[i] == "front") {
            list.front();
        } 
        
        if (command[i] == "back") {
            list.back();
        }
    }


    return 0;
}
