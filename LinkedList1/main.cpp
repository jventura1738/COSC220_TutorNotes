/*
 * Justin Ventura COSC220 Tutor Notes.
 * Topic: Linked List Basics.
 * 
 * File: main.cpp
*/
#include<iostream>
#include"list.h"

Node * searchLocation(Node * head, int search_id) {

    if (!head) {

        return nullptr;

    }
    else {

        Node * temp = head;
        while (temp->next && temp->next->data < search_id) {

            temp = temp->next;

        }
        return temp;

    }

}


int main() {

    int val = 1;
    //Node * head = create_node(val);

    Node * head = insert_node(nullptr, 5);
    head = insert_node(head, 1);
    head = insert_node(head, 4);
    head = insert_node(head, 6);

    for (int i = 0; i < 15; i++) {

        head = insert_node(head, i);

    }

    if (is_in_list(head, 5)) {

        std::cout << "List has a 5!\n";

    }
    else {

        std::cout << "list does NOT have a 5!\n";

    }

    // should print:
    // 0 1 1 2 3 4 4 5 5 6 6 7 8 9 10 11 12 13 14
    print_list(head);

    Node * temp = searchLocation(head, 234895738);
    if (temp) {

        std::cout << temp->data << "\n";

    }
    else {

        std::cout << "Node dead buddy\n";

    }

    return 0;
}