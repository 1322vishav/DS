#include <iostream>
using namespace std;

class CNode {
public:
    int data;
    CNode* next;

    CNode(int num) {
        data = num;
        next = nullptr;
    }
};

class CircularList {
public:
    CNode* head;

    CircularList() {
        head = nullptr;
    }

    // Insert at beginning
    void insertAtBegin(int num) {
        CNode* newNode = new CNode(num);
        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            CNode* temp = head;
            while (temp->next != head)
                temp = temp->next;

            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    // Insert at end
    void insertAtEnd(int num) {
        CNode* newNode = new CNode(num);
        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            CNode* temp = head;
            while (temp->next != head)
                temp = temp->next;

            temp->next = newNode;
            newNode->next = head;
        }
    }

    // Insert after a value
    void insertAfter(int value, int num) {
        if (!head) return;

        CNode* temp = head;
        while (temp->next != head && temp->data != value)
            temp = temp->next;

        if (temp->data != value) return;

        CNode* newNode = new CNode(num);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete node
    void deleteNode(int value) {
        if (!head) return;

        CNode *temp = head, *prev = nullptr;

        while (temp->next != head && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        if (temp->data != value) return;

        if (temp == head) {
            CNode* last = head;
            while (last->next != head)
                last = last->next;

            if (head->next == head) {
                head = nullptr;
            } else {
                last->next = head->next;
                head = head->next;
            }
        } else {
            prev->next = temp->next;
        }
        delete temp;
    }

    // Search node
    void search(int value) {
        if (!head) return;
        CNode* temp = head;

        while (temp->next != head && temp->data != value)
            temp = temp->next;

        if (temp->data == value) cout << "Element found\n";
        else cout << "Element not found\n";
    }

    // Display (repeat head at end)
    void display() {
        if (!head) { cout << "List is Empty\n"; return; }

        CNode* temp = head;
        while (temp->next != head) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data << " ";
        cout << head->data << endl;
    }
};

int main() {
    CircularList cll;
    int ch, num, value;

    while (true) {
        cout << "\n1.Insert Begin  2.Insert End  3.Insert After\n";
        cout << "4.Delete  5.Search  6.Display  7.Exit\n";
        cin >> ch;

        if (ch == 1) {
            cin >> num;
            cll.insertAtBegin(num);
        }
        else if (ch == 2) {
            cin >> num;
            cll.insertAtEnd(num);
        }
        else if (ch == 3) {
            cin >> value >> num;
            cll.insertAfter(value, num);
        }
        else if (ch == 4) {
            cin >> value;
            cll.deleteNode(value);
        }
        else if (ch == 5) {
            cin >> value;
            cll.search(value);
        }
        else if (ch == 6) {
            cll.display();
        }
        else if (ch == 7) {
            break;
        }
    }
    return 0;
}
