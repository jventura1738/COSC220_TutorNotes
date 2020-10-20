#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node {
private:
  int hidden_data;

public:

  int id;
  std::string name;

  Node * next;

  // Default Constructor.
  Node();

  // Main Constructor.
  Node(int);

  // Main Constructor 3.
  Node(int, std::string);

  /* UTILITY METHODS */

  /*
   * Formatted print function.
   *
   * Prints the current node's name
   * and ID in a nice format.
  */
  void fprint();

  /*
   * For demonstration purposes.
   *
   * Returns private int 'hidden_data'.
  */
  int get_hidden_data();

};

#endif