#include "list.h"
using namespace std;
template<typename Item_Type>
Single_Linked_List< Item_Type>::Single_Linked_List() {
    head = nullptr;
    tail = nullptr;
    num_items = 0;
}

template<typename Item_Type>
Single_Linked_List< Item_Type>::~Single_Linked_List(){
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

template<typename Item_Type>
void Single_Linked_List< Item_Type>::push_front( Item_Type item) {
        Node* new_node = new Node<Item_Type>(item);
        if (empty()) {
            head = tail = new_node;
        }
        else {
            new_node->next = head;
            head = new_node;
        }
        num_items++;
    }

template<typename Item_Type>
void Single_Linked_List< Item_Type>::push_back( Item_Type item) {
        Node new_node = new Node<Item_Type>(item);
        if (empty()) {
            head = tail = new_node;
        }
        else {
            tail->next = new_node;
            tail = new_node;
        }
        num_items++;
    }

template<typename Item_Type>
void Single_Linked_List< Item_Type>::pop_front() {
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

template<typename Item_Type>
void Single_Linked_List< Item_Type>::pop_back() {
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

 
template<typename Item_Type>
 int& Single_Linked_List< Item_Type>::front()  {
        if (empty()) {
            std::cerr << "Error: List is empty." << std::endl;
            return Item_Type();
        }
        return head->data;
    }

template<typename Item_Type>
int& Single_Linked_List< Item_Type>::back()  {
        if (empty()) {
            std::cerr << "Error: List is empty." << std::endl;
            return Item_Type();
        }
        return tail->data;
    }

template<typename Item_Type>
bool Single_Linked_List< Item_Type>::empty()  {
        return head == nullptr;
    }

template<typename Item_Type>
void Single_Linked_List< Item_Type>::insert(size_t index, const Item_Type& item) {
        if (index > num_items) {
            index = num_items;
        }
        Node* new_node = new Node<Item_Type>(item);
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

template<typename Item_Type>
bool Single_Linked_List<Item_Type>::remove(size_t index) {
        if (empty() || index >= num_items) {
            return false;
        }
        Node* temp = head;
        if (index == 0) {
                head = temp->next;
            if (head == nullptr) {
                tail = nullptr;
            }
        }
        else {
            for (size_t i = 0; i < index - 1; i++) {
                temp = temp->next;
            }
            Node* temp = temp->next;
            temp->next = temp->next->next;
            if (tail == temp) {
                tail = temp;
            }
        }
        delete temp;
        num_items--;
        return true;
    }

template<typename Item_Type>
size_t Single_Linked_List<Item_Type>:: find(const Item_Type& item) {
        Node* temp = head;
        for (size_t i = 0; i < num_items; i++) {
            if (temp->data == item) {
                return i;
            }
            temp = temp->next;
        }
        return num_items;
    }

template<typename Item_Type>
void Single_Linked_List<Item_Type>::print() {
    Node* temp = head; 
    while (temp != nullptr) {
        cout << temp->data << " "; 
        temp = temp->next;
    }
    cout << endl; 
}

