    #include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) { data = x; next = NULL; }
};

class CircularList {
public:
    Node* head;

    CircularList() { head = NULL; }

    void insertAtEnd(int x) {
        Node* newNode = new Node(x);
        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void display() {
        if (!head) return;

        Node* temp = head;
        while (temp->next != head) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data << " ";
        cout << head->data; // repeat head
    }
};

int main() {
    CircularList cl;
    cl.insertAtEnd(20);
    cl.insertAtEnd(100);
    cl.insertAtEnd(40);
    cl.insertAtEnd(80);
    cl.insertAtEnd(60);

    cl.display();
    return 0;
}
