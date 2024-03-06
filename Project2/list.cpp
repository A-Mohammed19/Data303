#include <iostream>
#include "list.h"
using namespace std;
Single_Linked_List::Single_Linked_List() {
    head = nullptr;
    tail = nullptr;
    num_items = 0;
}

Single_Linked_List::~Single_Linked_List() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void Single_Linked_List::push_front(int item) {
    Node* new_node = new Node();
    new_node->data = item;
    if (empty()) {
        head = tail = new_node;
    }
    else {
        new_node->next = head;
        head = new_node;
    }
    num_items++;
}

void Single_Linked_List::push_back(int item) {
    Node* new_node = new Node();
    new_node->data = item;
    if (empty()) {
        head = tail = new_node;
    }
    else {
        tail->next = new_node;
        tail = new_node;
    }
    num_items++;
}

void Single_Linked_List::pop_front() {
    if (empty()) {
        std::cerr << "Error: List is empty." << std::endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    if (head == nullptr) {
        tail = nullptr;
    }
    delete temp;
    num_items--;
}

void Single_Linked_List::pop_back() {
    if (empty()) {
        std::cerr << "Error: List is empty." << std::endl;
        return;
    }
    if (head == tail) {
        delete head;
        head = tail = nullptr;
    }
    else {
        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = nullptr;
    }
    num_items--;
}

int& Single_Linked_List::front() {
    if (empty()) {
        std::cerr << "Error: List is empty." << std::endl;
    }
    return head->data;
}

int& Single_Linked_List::back() {
    if (empty()) {
        std::cerr << "Error: List is empty." << std::endl;
    }
    return tail->data;
}

bool Single_Linked_List::empty() { return head == nullptr; }

void Single_Linked_List::insert(size_t index, const int& item) {
    if (index > num_items) {
        index = num_items;
    }
    Node* new_node = new Node();
    if (index == 0) {
        new_node->next = head;
        head = new_node;
    }
    else {
        Node* temp = head;
        for (size_t i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
        if (temp == tail) {
            tail = new_node;
        }
    }
    num_items++;
}

bool Single_Linked_List::remove(size_t index) {
    if (empty() || index >= num_items) {
        return false;
    }
    Node* temp = head;
    if (index == 0) {
        pop_front();
    }
    else {
        for (size_t i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        Node* temp_next = temp->next;
        temp->next = temp_next->next;
        if (tail == temp_next) {
            tail = temp;
        }
        delete temp_next;
        num_items--;
    }
    return true;

}

size_t Single_Linked_List::find(const int& item) {
    Node* temp = head;
    for (size_t i = 0; i < num_items; i++) {
        if (temp->data == item) {
            return i;
        }
        temp = temp->next;
    }
    return num_items;
}
void Single_Linked_List::print() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout <<"\n" << endl;
}
