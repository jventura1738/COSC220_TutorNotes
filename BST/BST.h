#ifndef BST_H
#define BST_H

#include "BSTnode.h"

template <class T>
class BST {

private:
  BSTnode<T> * root;

public:
  BST();
  ~BST();
  void pre_order(BSTnode<T> * r);
  void in_order(BSTnode<T> * r);
  void post_order(BSTnode<T> * r);
  void insert(const T & add);
  void remove(const T & rem);
  BSTnode<T> * search(const T & val);

}

#include "BST.cpp"
#endif