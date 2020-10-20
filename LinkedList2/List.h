#ifndef LIST_H
#define LIST_H

#include "Node.h"

class List {

public:
  Node * head;

  // Default Constructor.
  List();

  // Destructor.
  ~List();

  /*
   * Create Node.
   *
   * Called by insert_node(), creates a
   * node with the given values prompted
   * to the user.
  */
  Node * create_node();

  /*
   * Insert Node.
   *
   * Prompts the user to insert a node,
   * then checks if the node insert is
   * valid.  If so, inserts it into the
   * proper order by ID.
  */
  void insert_node();

  /*
   * Delete Node.
   *
   * Given an ID, finds a node with that
   * ID, then remove it from the list.
  */
  void remove_node(int id);

};

#endif