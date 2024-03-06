#pragma once
#include <cstddef>
#include <iostream>
using namespace std;

// the class for the single_linked_list
class Single_Linked_List {
private:
    struct Node {
        int data;
        Node* next;
    };
    Node* head;
    Node* tail;
    size_t num_items;

public:
    // Constructor
    Single_Linked_List();

    // Destructor
    ~Single_Linked_List();

    // Member functions
    void push_front(int item);

    void push_back(int item);

    void pop_front();

    void pop_back();

    int& front();

    int& back();

    bool empty();

    void insert(size_t index, const int& item);

    bool remove(size_t index);

    size_t find(const int& item);

    void print();
};
