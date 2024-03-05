#pragma once
#include <iostream>
#include <cstddef>
using namespace std; 

//the class for the single_linked_list 
template <typename Item_Type>
class Single_Linked_List {
private:
    struct Node {
        Item_Type data; 
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
    void push_front( Item_Type item);

    void push_back(Item_Type item);

    void pop_front();

    void pop_back();

    int& front();

    int& back();

    bool empty();

    void insert(size_t index,const Item_Type& item);

    bool remove(std::size_t index);

    size_t find(const Item_Type& item);

    void print(); 

};
