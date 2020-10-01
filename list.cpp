#include "list.h"
#include <iostream>

/*
 * Function to create a node with a given value:
 * val.  Dynamically allocates a new node and
 * points
*/
Node * create_node(int val) {

    Node * rtn = new Node;
    rtn->data = val; // *(rtn.data) = val;
    rtn->next = nullptr;
    return rtn;

}

/*
 * Function to insert a node with a given value:
 * val, into a list that starts at head.  This
 * will insert the new node into a proper sorted
 * order.
*/
Node * insert_node(Node * head, int val) {

    Node * newnode = create_node(val);
    Node * curr = head;

    if (!head)
        return newnode;

    if (newnode->data < curr->data) {

        newnode->next = head;
        return newnode;

    }

    while(curr->next && newnode->data >= curr->next->data) {

        curr = curr->next;

    }

    newnode->next = curr->next;
    curr->next = newnode;
    return head;

}

/*
 * This function will search through the
 * the list for a given value.  If found,
 * return true, else return false.
*/
Node * is_in_list(Node * head, int val) {

    if (!head) {

        return nullptr;

    }
    Node * temp = head;

    while(temp) {

        if(temp->data == val) {

            return temp;

        }

        temp = temp->next;

    }

    std::cout << "no match found buddy!\n";
    return nullptr;

}

Node * remove_node(Node * head, int val) {

    if (!is_in_list(head, val)) {

        return nullptr;

    }

    Node * temp = head;
    Node * prev = nullptr;

    while(temp->next && temp->data != val) {

        prev = temp;
        temp = temp->next;

    }

    prev->next = temp->next;
    if(temp->next) {
        temp->next = nullptr;
    }
    return temp;

}

/*
 * This is a function to print a list that
 * starts at head.
*/
void print_list(Node * head) {

    while(head) {

        std::cout << head->data << " ";
        head = head->next;

    }

    std::cout << "\n";

}
