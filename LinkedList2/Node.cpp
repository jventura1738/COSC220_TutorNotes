#include "Node.h"

// Default Constructor
Node::Node() {

  this->id = -1;
  this->name = "N/A";
  this->hidden_data = -999;
  //std::cout << "node created with no initial value!\n";

}

Node::Node(int val) {

  this->id = val;
  this->name = "N/A";
  this->hidden_data = -999;

  //id = val;

}

Node::Node(int val, std::string name) {

  this->id = val;
  this->name = name;
  this->hidden_data = -999;

}

void Node::fprint() {

  std::cout << "ID:   " << this->id << "\n";
  std::cout << "Name: " << this->name << "\n";

}

int Node::get_hidden_data() {

  return this->hidden_data;

}