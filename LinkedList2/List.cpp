#include "List.h"

List::List() {

  this->head = NULL;

}

List::~List() {

  std::cout << "List destructed.\n";

}

Node * List::create_node() {

  Node * newnode = new Node;

  // Assumes user is not an idiot.
  std::cout << "Enter ID: ";
  std::cin >> newnode->id;
  std::cout << "Enter name: ";
  std::cin >> newnode->name;

  return newnode;

}

void List::insert_node() {

  Node * newnode = create_node();

  if (!head) {

    head = newnode; 

  }
  
  Node * temp = head;

  while(temp->next && temp->next->id < newnode->id) {

    temp = temp->next;

  }

  newnode->next = temp->next;
  temp->next = newnode;

}

void List::remove_node(int id) {



}