#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) { data = x; next = prev = NULL; }
};

class DLL {
public:
    Node* head;

    DLL() { head = NULL; }

    int size() {
        int cnt = 0;
        Node* temp = head;
        while (temp) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
};

class CNode {
public:
    int data;
    CNode* next;
    CNode(int x) { data = x; next = NULL; }
};

class CLL {
public:
    CNode* head;

    CLL() { head = NULL; }

    int size() {
        if (!head) return 0;

        int cnt = 0;
        CNode* temp = head;
        do {
            cnt++;
            temp = temp->next;
        } while (temp != head);

        return cnt;
    }
};

int main() {
    return 0;
}
