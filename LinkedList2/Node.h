#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node {

public:
  int data;
  Node * next;

  Node();
  Node(int val);

};

#endif