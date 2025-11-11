#include <iostream>
using namespace std;

class Node {
public:
    char data;
    Node* next;
    Node* prev;

    Node(char x) { data = x; next = prev = NULL; }
};

class DLL {
public:
    Node* head;

    DLL() { head = NULL; }

    bool isPalindrome() {
        if (!head || !head->next) return true;

        Node* left = head;
        Node* right = head;

        while (right->next)
            right = right->next;

        while (left != right && right->next != left) {
            if (left->data != right->data)
                return false;
            left = left->next;
            right = right->prev;
        }
        return true;
    }
};

int main() {
    return 0;
}
