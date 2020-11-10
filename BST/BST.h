#ifndef BST_H
#define BST_H

#include "BSTnode.h"

template <class T>
class BST {

private:
  BSTnode<T> * _max(BSTnode<T> * x);
  BSTnode<T> * _min(BSTnode<T> * x);
  BSTnode<T> * _successor(BSTnode<T> * x);
  BSTnode<T> * _predecessor(BSTnode<T> * x);

public:
  BSTnode<T> * root;
  BST();
  ~BST();
  void pre_order(BSTnode<T> * r);
  void in_order(BSTnode<T> * r);
  void post_order(BSTnode<T> * r);
  void insert(BSTnode<T> * z);
  void remove(BSTnode<T> * z);
  void subtreeRemoval(BSTnode<T> * r);
  BSTnode<T> * search(BSTnode<T> * x, const T & key);

};

#include "BST.cpp"
#endif