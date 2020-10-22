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

  if (!this->head) {

    head = newnode; 

  }
  else {

    Node * prev = this->head;
    
    while(prev->next && prev->id > prev->next->id) {

      prev = prev->next;

    }

    newnode->next = prev->next;
    prev->next = newnode;

  }

}

void List::remove_node(int id) {

  Node *curr = this->head;
	Node *prev;

	if (!this->head) return;

	else if (head->id == id) {
		
    curr = this->head->next;
		delete this->head;
		this->head = curr;

	}
	else {

		while (curr && curr->id != id) {

			prev = curr;
			curr = curr->next;
		
    }
		if (curr) {

			prev->next = curr->next;
			delete curr;
		
    }

	}

}


void List::print_list() {

  Node * temp = this->head;
  while(temp) {

    std::cout << temp->id << ", " << temp->name << ".\n";
    temp = temp->next;

  }

}