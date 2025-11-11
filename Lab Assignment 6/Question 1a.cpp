#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int num) {
        data = num;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }

    // Insert at beginning
    void insertAtBegin(int num) {
        Node* newNode = new Node(num);
        if (!head) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Insert at end
    void insertAtEnd(int num) {
        Node* newNode = new Node(num);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr)
                temp = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    // Insert after a value (module logic)
    void insertAfter(int value, int num) {
        Node* temp = head;
        while (temp && temp->data != value)
            temp = temp->next;

        if (!temp) return;

        Node* newNode = new Node(num);
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next) temp->next->prev = newNode;
        temp->next = newNode;
    }

    // Delete node
    void deleteNode(int value) {
        if (!head) return;
        Node* temp = head;

        while (temp && temp->data != value)
            temp = temp->next;

        if (!temp) return;

        if (temp == head) {
            head = head->next;
            if (head) head->prev = nullptr;
        } else if (temp->next == nullptr) {
            temp->prev->next = nullptr;
        } else {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }
        delete temp;
    }

    // Search
    void search(int value) {
        Node* temp = head;
        while (temp && temp->data != value)
            temp = temp->next;

        if (!temp) cout << "Element not found\n";
        else cout << "Element found\n";
    }

    // Display
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    int choice, num, value;

    while (true) {
        cout << "\n1.Insert Begin  2.Insert End  3.Insert After\n";
        cout << "4.Delete Node  5.Search  6.Display  7.Exit\n";
        cin >> choice;

        if (choice == 1) {
            cin >> num;
            dll.insertAtBegin(num);
        }
        else if (choice == 2) {
            cin >> num;
            dll.insertAtEnd(num);
        }
        else if (choice == 3) {
            cin >> value >> num;
            dll.insertAfter(value, num);
        }
        else if (choice == 4) {
            cin >> value;
            dll.deleteNode(value);
        }
        else if (choice == 5) {
            cin >> value;
            dll.search(value);
        }
        else if (choice == 6) {
            dll.display();
        }
        else if (choice == 7) {
            break;
        }
    }
    return 0;
}
